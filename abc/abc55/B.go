package main

import (
	"fmt"
)

func main() {
	var n int64
	var ans int64 = 1
	const divisor int64 = 1000000007
	fmt.Scanf("%d", &n)

	var i int64 = 1
	for i = 1; i <= n; i++{
		ans *= i
		if ans > divisor{
			ans %= divisor
		}
	}
	fmt.Println(ans)
}
