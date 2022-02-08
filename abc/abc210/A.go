package main
import(
	"fmt"
)
func main(){
	var n, a, x, y, ans int32
	fmt.Scanf("%d %d %d %d", &n, &a, &x, &y)

	ans = x*n
	if n >= a{
		ans -= (x-y)*(n-a)
	}
	fmt.Printf("%d", ans)
}
