package main

import (
    "fmt"
    "sort"
)

func main() {
	var s []string = make([]string, 3)
	dic := []string{"ABC", "AGC", "AHC", "ARC"}

	fmt.Scanf("%s", &s[0])
	fmt.Scanf("%s", &s[1])
	fmt.Scanf("%s", &s[2])
	sort.Sort(sort.StringSlice(s))

	var i int = 0
	for i = 0; i < 3; i++{
		if s[i] != dic[i]{
			break
		}
	}

	fmt.Println(dic[i])
}
