package main
import "fmt"

func main(){
	var a, b, h int
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	fmt.Scanf("%d", &h)

	fmt.Printf("%d", (a+b)*h/2)
}
