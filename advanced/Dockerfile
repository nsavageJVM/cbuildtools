FROM debian:jessie

# Never ask for confirmations
ENV DEBIAN_FRONTEND noninteractive


RUN dpkg --add-architecture i386

RUN apt-get update -qq && apt-get clean

RUN apt-get -y install libc6:i386 libncurses5:i386 libstdc++6:i386

RUN apt-get -y install python-software-properties bzip2 wget openjdk-7-jdk build-essential vim


# Install android sdk
RUN wget http://dl.google.com/android/android-sdk_r24.0.2-linux.tgz && \
    tar xf android-sdk_r24.0.2-linux.tgz && \
    mv android-sdk-linux /usr/local/android-sdk && \
    rm android-sdk_r24.0.2-linux.tgz

# Install android ndk
RUN wget http://dl.google.com/android/ndk/android-ndk64-r10-linux-x86_64.tar.bz2 && \
    tar -xvjf android-ndk64-r10-linux-x86_64.tar.bz2 && \
    mv android-ndk-r10 /usr/local/android-ndk && \
    rm android-ndk64-r10-linux-x86_64.tar.bz2

# Install apache ant
RUN wget http://mirrors.ircam.fr/pub/apache//ant/binaries/apache-ant-1.9.4-bin.tar.gz && \
    tar -xvzf apache-ant-1.9.4-bin.tar.gz && \
    mv apache-ant-1.9.4 /usr/local/apache-ant && \
    rm apache-ant-1.9.4-bin.tar.gz

# Add android tools and platform tools to PATH
ENV ANDROID_HOME /usr/local/android-sdk
ENV PATH $PATH:$ANDROID_HOME/tools
ENV PATH $PATH:$ANDROID_HOME/platform-tools

# Add ant to PATH
ENV ANT_HOME /usr/local/apache-ant
ENV PATH $PATH:$ANT_HOME/bin

# Install latest android (19 / 4.4.2) tools and system image.
RUN echo "y" | android update sdk --no-ui --force --filter platform-tools,android-21,build-tools-21.1.0



COPY com.eduonix/ /com.eduonix/

WORKDIR /com.eduonix

CMD ["bash"]


