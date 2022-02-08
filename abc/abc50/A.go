package main
import "fmt"

func main(){
	var a, b int
	var s string

	fmt.Scanf("%d %s %d", &a, &s, &b)
	
	if s == "+"{
		fmt.Printf("%d", a + b)
	}else if s == "-"{
		fmt.Printf("%d", a - b)
	}
}
