FROM debian:jessie

# Never ask for confirmations
ENV DEBIAN_FRONTEND noninteractive


RUN apt-get update && apt-get install -y \
    automake \
    build-essential \
    wget \
    p7zip-full \
    bash \
    curl


RUN mkdir /TargetOS

RUN cd TargetOS && wget http://dl.google.com/android/android-sdk_r24.0.2-linux.tgz
RUN cd TargetOS &&  wget http://dl.google.com/android/ndk/android-ndk-r10c-linux-x86.bin

RUN cd TargetOS &&  tar -xvzf android-sdk_r24.0.2-linux.tgz && \
 chmod a+x android-ndk-r10c-linux-x86.bin && \
 7z x android-ndk-r10c-linux-x86.bin

ENV ANDROID_HOME /TargetOS/android-sdk-linux
ENV NDK_ROOT /TargetOS/android-ndk-r10c
ENV PATH $PATH:$ANDROID_HOME/tools
ENV PATH $PATH:$ANDROID_HOME/platform-tools

RUN  cd /TargetOS && mkdir=/TargetOS/toolchain-arm && bash /TargetOS/android-ndk-r10c/build/tools/make-standalone-toolchain.sh --verbose --platform=android-21 --install-dir=toolchain-arm --arch=arm --toolchain=arm-linux-androideabi-4.9 --system=linux-x86

ENV TOOLCHAIN /TargetOS/toolchain-arm
ENV SYSROOT $TOOLCHAIN/sysroot
ENV PATH $PATH:$TOOLCHAIN/bin:$SYSROOT/usr/local/bin

ENV ARCH armv7

ENV CROSS_COMPILE arm-linux-androideabi
ENV CC arm-linux-androideabi-gcc
ENV CXX arm-linux-androideabi-g++
ENV AR arm-linux-androideabi-ar
ENV AS arm-linux-androideabi-as
ENV LD arm-linux-androideabi-ld
ENV RANLIB arm-linux-androideabi-ranlib
ENV NM arm-linux-androideabi-nm
ENV STRIP arm-linux-androideabi-strip
ENV CHOST arm-linux-androideabi

COPY eduonix/ /eduonix/

WORKDIR /eduonix

CMD ["bash"]



