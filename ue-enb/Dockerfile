FROM ubuntu:18.04

RUN apt-get -y install git iperf3 make rsync gcc
RUN git clone https://github.com/facebookexperimental/S1APTester.git s1aptester

# resolvendo problema de compilação.
RUN cd /s1aptester/TestCntlrApp/build && make cleanall
RUN cd /s1aptester/TestCntlrApp/build && make 
RUN cp /s1aptester/TestCntlrApp/lib/libtfw.so  /usr/lib

RUN cd /s1aptester/Trfgen/build && make clean
RUN cd /s1aptester/Trfgen/build && make 
RUN cp /s1aptester/Trfgen/lib/libtrfgen.so  /usr/lib


COPY ts_utls.c /s1aptester/TestCntlrStub/src/ts_utls.c
COPY fw_api_int.x /s1aptester/TestCntlrApp/src/tfwApp/fw_api_int.x
RUN cd /s1aptester/TestCntlrStub/build/ && make clean
RUN cd /s1aptester/TestCntlrStub/build/ && make
COPY nbAppCfg.txt /s1aptester/TestCntlrStub/bin/nbAppCfg.txt

COPY exec.sh /exec.sh
RUN chmod +x /exec.sh
ENTRYPOINT ["/exec.sh"]






