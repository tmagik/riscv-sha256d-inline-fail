#!/bin/sh -x

L1='chacha20.cpp -lssl -lcrypto riscv-sha256d-fail.cpp'

F1='-O0'
F2='-O1'
F3='-O2'
#F3='-O2 -std=c++11 -pthread -Wall -Wextra -Wformat -Wformat-security -Wno-unused-parameter -g'


gcc $F1 -o f1.out $L1
./f1.out

gcc $F2 -o f2.out $L1
./f2.out

gcc-7 $F3 -o f3-gcc7.out $L1
./f3-gcc7.out

gcc-8 $F3 -o f3-gcc8.out $L1
./f3-gcc8.out
