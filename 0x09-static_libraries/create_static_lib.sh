#!/bin/bash

# Compile each .c file into .o object files
gcc -c *.c

# Create the static library liball.a from all .o files
ar rcs liball.a *.o

# Clean up: remove .o files after creating the library
rm *.o

