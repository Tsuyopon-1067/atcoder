package main
import(
	"fmt"
)
func main(){
	var a, b, ans int16
	fmt.Scanf("%d %d", &a, &b)
	ans = b - a + 1
	if ans < 0{
		ans = 0
	}
	fmt.Print(ans)
}
