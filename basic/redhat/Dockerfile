FROM fedora:20

RUN yum -y groupinstall "Development Tools"; yum clean all

COPY src/ /src/

WORKDIR /src

CMD ["bash"]
