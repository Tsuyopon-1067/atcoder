package main
import "fmt"

func main(){
	var a, b, c int
	fmt.Scanf("%d %d %d", &a, &b, &c)
	
	if a == b && b == c{
		fmt.Print(1)
	}else if a == b || b == c || c == a{
		fmt.Print(2)
	}else{
		fmt.Print(3)
	}
}
