package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scanf("%d", &n)
	t := make([]int, n)
	for i := 0; i < n; i++{
		fmt.Scanf("%d", &t[i])
	}

	fmt.Scanf("%d", &m)
	p := make([]int, m)
	x := make([]int, m)

	for i := 0; i < m; i++{
		fmt.Scanf("%d", &p[i])
		fmt.Scanf("%d", &x[i])
	}

	var timeDef int
	for i := 0; i < n; i++{
		timeDef += t[i]
	}

	for i := 0; i < m; i++{
		var time int = timeDef
		time = time - t[p[i]-1] + x[i]
		fmt.Println(time)
	}
}
