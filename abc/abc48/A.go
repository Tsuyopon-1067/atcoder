package main
import(
	"fmt"
	"strings"
)

func main(){
	var s string
	fmt.Scanf("%s %s", &s, &s)
	
	cptl := strings.Split(s, "")

	fmt.Printf("A%sC", cptl[0])
}
