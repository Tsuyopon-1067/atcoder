package main
import "fmt"

func main(){
	var a, b, c, d int
	fmt.Scanf("%d %d %d %d", &a, &b, &c, &d)
	if a*b < c*d{
		fmt.Print(c*d)
	}else{ 
		fmt.Print(a*b)
	}
}
