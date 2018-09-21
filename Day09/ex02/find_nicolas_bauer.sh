cat $1 | grep -i "nicolas\tbauer" | rev | cut -f2 | rev | awk '!/\./'
