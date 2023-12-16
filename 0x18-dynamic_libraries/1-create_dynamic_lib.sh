#!/bin/bash

c_files=$(ls *.c)

gcc -Wall -pedantic -Werror -Wextra -shared -fPIC -o liball.so $c_files
