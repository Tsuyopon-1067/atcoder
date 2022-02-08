package main
import "fmt"

func main(){
	var a, b, c, t int
	fmt.Scanf("%d %d %d", &a, &b, &c)
	
	if a < b{
		t = a
		a = b
		b = t
	}
	if a < c{
		t = a
		a = c
		c = t
	}
	if b < c{
		t = b
		b = c
		c = t
	}

	if a == b + c {
		fmt.Printf("Yes")
	}else {
		fmt.Printf("No")
	}
}
