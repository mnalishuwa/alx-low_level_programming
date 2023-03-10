#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar cr liball.a *.o
