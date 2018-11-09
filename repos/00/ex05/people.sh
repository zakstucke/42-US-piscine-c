ldapsearch uid="z*" cn | grep "^cn" | sort -f -r | cut -c 5-
