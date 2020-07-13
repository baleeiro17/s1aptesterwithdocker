FROM ubuntu:18.04

RUN git clone https://github.com/facebookexperimental/S1APTester.git s1aptester

# resolvendo problema de compilação.
COPY ts_utls.c /s1aptester/TestCntlrStub/src/ts_utls.c
COPY fw_api_int.x /s1aptester/TestCntlrApp/src/tfwApp/fw_api_int.x
COPY nbAppCfg.txt /s1aptester/TestCntlrStub/bin/nbAppCfg.txt

RUN cd /s1aptester/TestCntlrApp/build && make cleanall
RUN cd /s1aptester/TestCntlrApp/build && make 
COPY /s1aptester/TestCntlrApp/lib/libtfw.so  /usr/lib

RUN cd /s1aptester/Trfgen/build && make clean
RUN cd /s1aptester/Trfgen/build && make 
COPY /s1aptester/Trfgen/lib/libtrfgen.so  /usr/lib

RUN cd /s1aptester/TestCntlrStub/build/ && make clean
RUN cd /s1aptester/TestCntlrStub/build/ && make

#COPY exec.sh /exec.sh
#RUN chmod +x /exec.sh
#ENTRYPOINT ["/exec.sh"]






