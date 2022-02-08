#!/usr/bin/bash
if [ $# -ne 1 ]; then
	echo "引数は1つ"
exit 1
fi

file=$1
name=${file%.*}
ext=${file##*.}
case "$ext" in
	"c" ) 
		gcc $name.$ext -o $name.out
		./$name.out
		;;
	"cpp" ) 
		g++ $name.$ext -o $name.out
		./$name.out
		;;
	"py" ) 
		python3 $name.$ext;;
	"rb" ) 
		rb $name.$ext;;
esac
