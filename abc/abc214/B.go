//B - How many?
package main

import "fmt"

func main() {
	var S, T, a, b, c, k int
	fmt.Scanf("%d %d", &S, &T)

	for a = 0; a <= S; a++ {
		for b = 0; b <= S-a; b++ {
			for c = 0; c <= S-a-b; c++ {
				if a+b+c <= S && a*b*c <= T {
					k++
				}
			}
		}
	}
	fmt.Println(k)
}
