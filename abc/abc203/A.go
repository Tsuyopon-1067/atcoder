package main
import "fmt"

func main(){
	var a, b, c int
	fmt.Scanf("%d %d %d", &a, &b, &c)

	if a == b{
		fmt.Print(c)
	}else if b == c{
		fmt.Print(a)
	}else if c == a{
		fmt.Print(b)
	}else{
		fmt.Print(0)
	}
}
