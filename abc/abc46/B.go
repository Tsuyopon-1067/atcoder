package main
import "fmt"

func main(){
	var n, k int
	fmt.Scanf("%d %d", &n, &k)
	
	var ans int = k
	for i := 1; i < n; i++{
		ans *= (k-1)
	}

	fmt.Println(ans)
}
