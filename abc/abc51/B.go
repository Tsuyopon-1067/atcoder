package main

import (
	"fmt"
)

func main() {
	var k, s, ans int
	fmt.Scanf("%d %d", &k, &s)

	var xRoop = min(s, k)
	for x := 0; x <= xRoop; x++{
		var yRoop = min(s - x, k)
		for y := 0; y <= yRoop; y++{
			if s - (x+y) <= k{
				ans++
			}
		}
	}

	fmt.Println(ans)
}

func min(x, y int) int{
	if x < y{
		return x
	}else{
		return y
	}
}
