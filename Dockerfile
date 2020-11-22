FROM centos

WORKDIR /root/algorithms_and_data_structures

COPY ./ ./

RUN yum install -y gcc gcc-c++ make automake cmake git

RUN mkdir -p build
RUN cd build && rm -rf ./* && cmake .. && make

