FT_LINE1=1
FT_LINE2=8
cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -d ":" -f 1 | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | tr '\n' "," | sed "s/,/, /g" | rev | cut -c 3- | rev | sed "s/$/./g"
