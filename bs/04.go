package main

import "fmt"

func main() {
	var N int
	var A [200]int

	fmt.Scanf("%d%", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
	}

	var r int
label1:
	for r = 0; r < 10000000; r++ {
		for j := 0; j < N; j++ {
			if A[j]%2 == 1 {
				break label1
			}
			A[j] = A[j] / 2
		}
	}
	fmt.Println(r)
}
