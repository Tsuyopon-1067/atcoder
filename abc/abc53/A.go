package main
import "fmt"

func main(){
	var x int
	fmt.Scanf("%d", &x)
	if x < 1200{
		fmt.Print("ABC")
	}else{
		fmt.Print("ARC")
	}
}
