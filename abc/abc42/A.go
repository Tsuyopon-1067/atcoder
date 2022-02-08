package main
import "fmt"

func main(){
	var a[3] int
	var k5, k7 int = 0, 0
	for i := 0; i < 3; i++{
		fmt.Scanf("%d", &a[i])
		if a[i] == 5{
			k5++
		}else if a[i] == 7{
			k7++
		}
	}
	if k5 == 2 && k7 == 1{
		fmt.Print("YES")
	}else {
		fmt.Print("NO")
	}
}
