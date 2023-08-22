#!/bin/bash
gcc -Wall -Wextra -Werror -Pedantic -C -fPIC *.c
gcc -Shared -o liball.so *.o
export LD_LIBRARY_PARH=.:$LD_LIBRARY_PATH
