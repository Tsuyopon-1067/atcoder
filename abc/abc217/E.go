package main
import(
	"fmt"
)

func main(){
	var q int
	fmt.Scanf("%d", &q)

	var qer [200000]int
	var x [200000]int
	var a [200000]int

	for i := 0; i < q; i++{
		fmt.Scanf("%d %d", &qer[i], &x[i])
	}

	for i := 0; i < q; i++{
		fmt.Printf("%d %d\n", qer[i], x[i])
	}

	for i := 0; i < q; i++{
		switch qer[i] {
		case 1:
			
		}
	case 2:
	case 3:
	}
}
