package main
import "fmt"

func main(){
	var s string
	fmt.Scanf("%s", &s)
	if s == "Hello,World!"{
		fmt.Print("AC")
	}else{
		fmt.Print("WA")
	}
}
