package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scanf("%d %d", &n, &m)

	k := make([]int, m)
	a := make([][]int, m)

	for i := 0; i < m; i++{
		fmt.Scanf("%d", &k[i])
		a[i] = make([]int, k[i])
		for j := 0; j < k[i]; j++{
			fmt.Scanf("%d", &a[i][j])
		}
	}

	top := make([]int, m)
	for i := 0; i < m; i++{
		top[i] = k[i]-1
	}

	for{
		for i := 0; i < m; i++{
			if top[i] < 0{
				continue
			}
			for j := 0; j < m; j++{
				if i == j || top[j] < 0{
					continue
				}

				if a[i][top[i]] == a[j][top[j]]{
					top[i]--
					top[j]--
				}
			}
		}

		allflug := true
		for i := 0; i < m; i++{
			if top[i] > 0{
				allflug = false
				break
			}
		}
		if allflug == true{
			fmt.Printf("Yes")
		}else{
			fmt.Printf("No")
		}
		break
	}

}
