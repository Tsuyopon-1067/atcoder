//C - Distribution
package main

import "fmt"

func main() {
	var N int
	var time int
	var S [200000]int
	var T [200000]int

	fmt.Scanf("%d", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &S[i])
	}
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &T[i])
	}

	time = T[0]
	if time > T[N-1]+S[N-1] {
		time = T[N-1] + S[N-1]
	}
	fmt.Println(time)
	for i := 0; i < N-1; i++ {
		time += S[i]
		if time > T[i+1] {
			time = T[i+1]
		}
		fmt.Println(time)
	}
}
