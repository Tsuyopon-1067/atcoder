package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scanf("%d %d", &n, &m)

	var a []string = make([]string, n)
	for i := 0; i < n; i++{
		fmt.Scanf("%s", &a[i])
	}

	var b []string = make([]string, m)
	for i := 0; i <m; i++{
		fmt.Scanf("%s", &b[i])
	}
	var flug bool = false
	for i := 0; i <= n - m; i++{//横へ
		if a[0][i:i+m] == b[0]{
			for j := 0; j < n; j++{
				if a[j][i:i+m] != b[j]{
					break
				}
				flug = true
				i = n
				break
			}
		}
	}
	if flug{
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}
