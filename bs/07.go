//Card Game for Two
package main

import "fmt"

func main() {
	var N int
	var a [100]int
	fmt.Scanf("%d", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &a[i])
	}

	for i := 0; i < N; i++ {
		var maxIdx int = i
		for j := i + 1; j < N; j++ {
			if a[maxIdx] < a[j] {
				maxIdx = j
			}
		}
		var temp int = a[i]
		a[i] = a[maxIdx]
		a[maxIdx] = temp
	}

	var Alice, Bob int
	for i := 0; i < N/2; i++ {
		Alice += a[2*i]
		Bob += a[2*i+1]
	}
	if N%2 == 1 {
		Alice += a[N-1]
	}
	fmt.Println(Alice - Bob)
}
