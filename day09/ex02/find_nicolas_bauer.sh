grep -i "nicolas\t" $1 | grep -i "\tbauer\t" | awk -F"\t" '{print $4}'
