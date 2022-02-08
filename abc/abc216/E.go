package main

import (
	"fmt"
)

func main() {
	var n, k int
	fmt.Scanf("%d %d", &n, &k)

	a := make([]int, n)
	for i := 0; i < n; i++{
		fmt.Scanf("%d", &a[i])
	}

	var sum int
	for i := 0; i < k; i++{
		var tmax int = 0
		for j := 0; j < n; j++{
			if a[tmax] < a[j]{
				tmax = j
			}
		}
		sum += a[tmax]
		a[tmax]--
	}
	fmt.Print(sum)
}
