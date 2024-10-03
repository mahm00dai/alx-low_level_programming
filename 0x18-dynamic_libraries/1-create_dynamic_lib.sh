#!/bin/bash
gcc -fPIC -c *.c  # Compile all .c files into position-independent object files
gcc -shared -o liball.so *.o  # Create the shared library from the object files

