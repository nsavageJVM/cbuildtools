FROM debian:jessie

# Never ask for confirmations
ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update && apt-get install -y vim openjdk-7-jdk build-essential

COPY src/ /src/

WORKDIR /src

CMD ["bash"]


