#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -Wno-unused-parameter -c *.c
ar -rc liball.a *.o
ranlib liball.a
