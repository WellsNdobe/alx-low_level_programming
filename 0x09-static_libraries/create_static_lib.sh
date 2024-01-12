#!/bin/bash

# Compile all .c files
gcc -c *.c

# Create library
ar rcs liball.a *.o

# Delete object files
rm -f *.o
