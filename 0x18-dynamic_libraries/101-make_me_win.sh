#!/bin/bash
gcc -c -fPIC test.c
gcc -shared -o libexample.so test.o
LD_PRELOAD=/$PWD/libexample.so ./gm 9 8 10 24 75 9
