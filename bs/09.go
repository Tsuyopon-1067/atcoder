//Otoshidama
package main

import "fmt"

func main() {
	var N, Y, a, b int
	fmt.Scanf("%d %d", &N, &Y)

	for a = 0; a <= N; a++ {
		for b = 0; b <= N-a; b++ {
			if (10000*a + 5000*b + 1000*(N-a-b)) == Y {
				fmt.Printf("%d %d %d\n", a, b, N-a-b)
				b = N + 10
				a = N + 10
			}
		}
	}
	if a != N+11 {
		fmt.Println("-1 -1 -1")
	}
}
