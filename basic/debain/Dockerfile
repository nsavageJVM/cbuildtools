FROM debian:jessie

RUN apt-get update && apt-get install -y \
    gcc \
    build-essential

COPY src/ /src/

WORKDIR /src

CMD ["bash"]


