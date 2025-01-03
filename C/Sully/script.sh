#!/bin/bash

clang -Wall -Wextra -Werror Sully.c -o Sully ; ./Sully

diff Sully.c Sully_0.c

diff Sully_3.c Sully_2.c
