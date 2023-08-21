#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic test.c -shared -o libexample.so
LD_PRELOAD=/$PWD/libexample.so ./gm 9 8 10 24 75 9
