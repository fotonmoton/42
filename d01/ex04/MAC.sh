ifconfig | tr -d "\t" | grep "^ether" | cut -d " " -f 2
