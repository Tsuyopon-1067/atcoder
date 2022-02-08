package main

import (
    "fmt"
)

func main() {
	var n int
	fmt.Scanf("%d", &n)

	var p[]int = make([]int, n)
	var q[]int = make([]int, n)
	for i := 0; i < n; i++{
		fmt.Scanf("%d", &p[i])
		q[p[i]-1] = i + 1
	}

	for i := 0; i < n; i++{
		fmt.Printf("%d ", q[i])
	}
}
