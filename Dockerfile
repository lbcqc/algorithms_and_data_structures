FROM centos

WORKDIR /root/algorithms_and_data_structures

COPY ./ ./

RUN yum install -y gcc gcc-c++ make automake cmake git rpm-build wget

run wget -P /usr/local/ https://liquidtelecom.dl.sourceforge.net/project/cppcheck/cppcheck/2.2/cppcheck-2.2.tar.gz
run cd /usr/local/ && tar -xzvf cppcheck-2.2.tar.gz && rm -f cppcheck-2.2.tar.gz
RUN cd /usr/local/cppcheck-2.2 && mkdir -p build && cd build && cmake .. && make -j4 && make install

RUN mkdir -p build
RUN cd build && rm -rf ./* && cmake .. && make

