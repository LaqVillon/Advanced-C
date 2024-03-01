#!/bin/bash

# gcc -Wall main.c other.c -o main   # Standar

gcc -Wall *.c -o main -lm # Optional, considering all .c files

echo "  **** COMPILATION FINISHED ****  " 

