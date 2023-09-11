find . -name "*.sh" |awk -F/ '{print $NF}' | awk '{print substr($0, 1, length($0) - 3)}'
