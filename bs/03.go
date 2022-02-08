package main
import "fmt"

func main(){
		var s int
		fmt.Scanf("%d", &s)
		fmt.Printf("%d\n", s/100 + s/10 -s/100*10 + s%10)
}
