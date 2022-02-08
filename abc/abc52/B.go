package main

import(
	"fmt"
	"strings"
)

func main(){
	var x, n, ans int
	var s string

	fmt.Scanf("%d", &n)
	fmt.Scanf("%s", &s)

	str := strings.Split(s, "")

	for i := 0; i < n; i++{
		if str[i] == "I"{
			x++
		}else{
			x--
		}
		if ans < x{
			ans = x
		}
	}
	fmt.Println(ans)
}
