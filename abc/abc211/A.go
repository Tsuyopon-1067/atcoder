package main
import(
	"fmt"
)
func main(){
	var a, b ,c float64
	fmt.Scanf("%f %f", &a, &b)
	c = (a-b)/3+b
	fmt.Print(c)
}
