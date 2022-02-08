package main

import "fmt"

func main() {
	var A, B, C, X, res int
	fmt.Scanf("%d", &A)
	fmt.Scanf("%d", &B)
	fmt.Scanf("%d", &C)
	fmt.Scanf("%d", &X)

	for i := 0; i <= A; i++ {
		for j := 0; j <= B; j++ {
			for k := 0; k <= C; k++ {
				if 500*i+100*j+50*k == X {
					res++
				}
			}
		}
	}
	fmt.Println(res)
}
