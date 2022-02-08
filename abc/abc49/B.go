package main

import (
	"fmt"
)

func main() {
	var h, w int
	fmt.Scanf("%d %d", &h, &w)

	c := make([]string, h)
	for i := 0; i < h; i++{
		fmt.Scanf("%s", &c[i])
	}
	

	for i := 0; i < h; i++{
		fmt.Println(c[i])
		fmt.Println(c[i])
	}
}
