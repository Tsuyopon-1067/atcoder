package main
import (
	"fmt"
	"sort"
)

func main(){
	var n, l int
	fmt.Scanf("%d %d", &n, &l)
	s := make([]string, n)

	for i := 0; i < n; i++{
		fmt.Scanf("%s", &s[i])
	}
	sort.Strings(s)	

	for i := 0; i < n; i++{
		fmt.Printf("%s", s[i])
	}
}
