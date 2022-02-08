//Kagami Mochi
package main

import "fmt"

func main() {
	var N, k int //kは重複数
	var d [100]int

	fmt.Scanf("%d", &N)

	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &d[i])
		for j := 0; j < i; j++ {
			if d[i] == d[j] {
				k++
				break
			}
		}
	}
	fmt.Println(N - k)
}
