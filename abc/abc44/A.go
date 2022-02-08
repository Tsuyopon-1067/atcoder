package main
import "fmt"

func main(){
	var n, k, x, y int
	fmt.Scanf("%d", &n)
	fmt.Scanf("%d", &k)
	fmt.Scanf("%d", &x)
	fmt.Scanf("%d", &y)
	
	if n < k{
		k = n
	}
	fmt.Printf("%d", k*x + (n-k)*y)
}
