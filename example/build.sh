#!/bin/sh

clang++ -lncurses -lm -I./../include ../booklib/$2 $1 $3
