cat /etc/passwd  | grep -v -e '#' | awk "NR%2==0" | cut -d : -f1 | rev | sort -r | awk " NR <= $FT_LINE2  && NR >= $FT_LINE1 " | sed 's/$/,/' | tr "\n " " " | sed "s/..$/./" | tr -d "\n"
