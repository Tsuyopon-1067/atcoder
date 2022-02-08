package main

import (
	"fmt"
)

func main() {
	var x, y int
	var z float64
	fmt.Scanf("%g", &z)

	x = int(z)
	y = int(int(z*10) - x*10)

	if 0 <= y && y <= 2{
		fmt.Printf("%d-", x)
	}else if 3 <= y && y <= 6{
		fmt.Printf("%d", x)
	}else{
		fmt.Printf("%d+", x)
	}
}
