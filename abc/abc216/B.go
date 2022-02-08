package main

import (
	"fmt"
)

func main() {
	var n int
	var s [1000]string
	var t [1000]string

	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++{
		fmt.Scanf("%s %s", &s[i], &t[i])
	}

	var flug int = 0

	for i := 0; i < n - 1; i++{
		for j := i + 1; j < n; j++{
			if s[i] == s[j] && t[i] == t[j]{
				flug = 1
				break
			}
		}
	}

	if flug == 1{
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}
