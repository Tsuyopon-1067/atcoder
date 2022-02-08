package main
import(
	"fmt"
	"strings"
)

func main(){
	var alphabet[26] string = [26]string{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}
	var s string
	fmt.Scanf("%s", &s)

	var count[26] int

	for _, str := range strings.Split(s, ""){
		for i, alpha := range alphabet{
			if str == alpha{
				count[i]++
			}
		}
	}

	var flug bool = true
	for i := 0; i < 26; i++{
		if count[i]%2 == 1{
			flug = false
			break
		}
	}
	if flug{
		fmt.Printf("Yes")
	}else{
		fmt.Printf("No")
	}
}
