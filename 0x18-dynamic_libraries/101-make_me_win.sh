#!/bin/bash
echo -e "9\n8\n10\n24\n75\n9" > winning_numbers.txt
./gm $(cat winning_numbers.txt) && rm winning_numbers.txt

