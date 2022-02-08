package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", N)

	if N <= 125 {
		fmt.Println("4")
	} else if N <= 211 {
		fmt.Println("6")
	} else {
		fmt.Println("8")
	}
}
