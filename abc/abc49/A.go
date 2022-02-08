package main
import "fmt"

func main(){
	var s string
	fmt.Scanf("%s", &s)
	if s == "a" || s == "e" || s == "i" || s == "o" || s == "u"{
		fmt.Print("vowel")
	}else{
		fmt.Print("consonant")
	}
}
