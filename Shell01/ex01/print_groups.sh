groups $FT_USER | sed "s/^[[:alnum:]-]* : //g" | sed 's/ /,/g' | tr -d "\n"
