package main

import "fmt"

func main() {
	var A, B, N, res, temp int
	fmt.Scanf("%d %d %d", &N, &A, &B)
	for i := 1; i <= N; i++ {
		temp = digit(i)
		if A <= temp && temp <= B {
			res += i
		}
	}
	fmt.Println(res)
}
func digit(n int) int {
	var sum int
	for n > 0 {
		sum += n % 10
		n /= 10
	}
	return sum
}
