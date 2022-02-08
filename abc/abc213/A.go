package main

import "fmt"

func main() {

	var A int
	var B int
	var C int

	fmt.Scan(&A)
	fmt.Scan(&B)

	for C = 0; C < 256; C++ {
		if (A ^ C) == B {
			break
		}
	}
	fmt.Printf("%d\n", C)
}
