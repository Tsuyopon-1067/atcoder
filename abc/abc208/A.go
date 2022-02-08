package main
import(
	"fmt"
)
func main(){
	var a, b int16
	fmt.Scanf("%d %d", &a, &b)

	if a <= b && b <= a*6{
		fmt.Print("Yes")
	}else{
		fmt.Print("No")
	}
}
