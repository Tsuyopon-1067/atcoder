package main
import "fmt"

func main(){
	var a, b int
	fmt.Scanf("%d %d", &a, &b)
	if a == 1{
		a = 14
	}
	if b == 1{
		b = 14
	}
	
	if a < b{
		fmt.Print("Bob")
	}else if a > b{
		fmt.Print("Alice")
	}else{
		fmt.Print("Draw")
	}
}
