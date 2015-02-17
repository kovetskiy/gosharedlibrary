#!/bin/bash

gccgo -shared editor.go -o libeditor.so -lgcc -fPIC
gcc -g  -O0 test.c -o test -L. -leditor -fPIC

LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH ./test
