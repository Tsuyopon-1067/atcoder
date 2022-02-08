//Traveling
package main

import (
	"fmt"
)

func main() {
	var N int
	var x [100001]int
	var y [100001]int
	var t [100001]int
	var flug bool = true

	fmt.Scanf("%d", &N)
	for i := 1; i <= N; i++ {
		fmt.Scanf("%d %d %d", &t[i], &x[i], &y[i])
	}

	for i := 1; i <= N; i++ {
		var dt int = t[i] - t[i-1]
		var dx int = iAbs(x[i] - x[i-1])
		var dy int = iAbs(y[i] - y[i-1])

		if (dx+dy) > dt || (dx+dy)%2 != dt%2 {
			flug = false
			break
		}
	}

	if flug == true {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
func iAbs(x int) int {
	if x < 0 {
		x = -x
	}
	return x
}
