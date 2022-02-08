package main
import(
	"fmt"
	"math"
)
func main(){
	var n float64
	fmt.Scanf("%f", &n)

	n = n*1.08
	n = math.Trunc(n)

	if n < 206{
		fmt.Print("Yay!")
	}else if n == 206{
		fmt.Print("so-so")
	}else{
		fmt.Print(":(")
	}
}
