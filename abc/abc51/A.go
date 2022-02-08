package main
import(
	"fmt"
	"strings"
)

func main(){
	var s string
	fmt.Scanf("%s", &s)
	str := strings.Split(s, "")
	str[5] = " "
	str[13] = " "

    for i := 0; i < 19; i++{
        fmt.Printf("%s", str[i])
    }
}
