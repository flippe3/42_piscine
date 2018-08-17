#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk 'NR%2!=0' | cut -d : -f 1 | rev | sort -r --ignore-case | grep "^[$FT_LINE1-$FT_LINE2]" | tr "\n" ", " | sed "s/_,/_, /g" | sed "s/, $/./"
