package main
import (
	"fmt"
)

func main(){
	var l, q int
	var gap [20001]int
	fmt.Scanf("%d %d", &l, &q)
	gap[l] = 1

	c := make([]int, q)
	x := make([]int, q)
	for i := 0; i < q; i++{
		fmt.Scanf("%d %d", &c[i], &x[i])
	}

	for i := 0; i < q; i++{
		if c[i] == 1{
			gap[x[i]] = 1
		}else{
			var lIdx int
			var rIdx int
			for j := 1; j <= l; j++{
				if gap[j] == 1{
					if j > x[i]{
						rIdx = j
						fmt.Println(rIdx - lIdx)
						break
					}
					lIdx = j
				}
			}
		}
	}
}
