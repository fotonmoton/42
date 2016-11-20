cat /etc/passwd | grep -v ^# | sed  -n  'n;p' | cut -d ":" -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | tr "\n" "."
