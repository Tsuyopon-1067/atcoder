package main

import (
	"fmt"
)

func main() {
	var n, i int
	var str [120]string
	fmt.Scanf("%d", &n)
	
	for i = 0; i <= 120; i++{
		if n % 2 == 0{
			n /= 2
			str[i] = "B"
		}else{
			n--
			str[i] = "A"
		}

		if n == 0{
			break
		}
	}

	for j := i; j >= 0; j--{
		fmt.Print(str[j])
	}
}
