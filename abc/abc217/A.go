package main

import (
    "fmt"
    "sort"
)

func main() {
	var s []string = make([]string, 2)
	var t []string = make([]string, 2)
	fmt.Scanf("%s %s", &s[0], &s[1])
	t[0] = s[0]
	t[1] = s[1]

	sort.Sort(sort.StringSlice(s))
	if s[0] == t[0]{
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}
