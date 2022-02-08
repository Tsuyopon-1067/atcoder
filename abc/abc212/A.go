package main
import(
	"fmt"
)
func main(){
	var a, b int
	fmt.Scanf("%d %d", &a, &b)
	if 0 < a && b == 0{
		fmt.Print("Gold")
	}else if a == 0 && 0 < b{
		fmt.Print("Silver")
	}else{
		fmt.Print("Alloy")
	}
}
