package main

import(
	"fmt"
	"strings"
)

func main(){
	var s string
	fmt.Scanf("%s", &s)
	str := strings.Split(s, "")

	var aFlug bool = false
	var ans, idxA, idxZ int
	for i := 0; i < len(str); i++{
		if aFlug == true{
			if str[i] == "Z"{
				idxZ = i
			}
		}else{
			if str[i] == "A"{
				idxA = i
				aFlug = true
			}
		}
	}
	ans = idxZ - idxA + 1
	fmt.Println(ans)
}
