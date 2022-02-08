package main
import (
	"fmt"
	"strings"
)

func main(){
	var s string
	fmt.Scanf("%s", &s)

	str := strings.Split(s, "")
	ans := make([]string, 0)

	for i := 0; i < len(str); i++{
		if str[i] == "B"{
			if(len(ans) > 0){
				ans = ans[:len(ans) - 1]
			}
		}else{
			ans = append(ans, str[i])
		}
	}

	fmt.Println(strings.Join(ans, ""))
}
