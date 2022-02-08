package main
import "fmt"
import "sort"

func main(){
	var ar[]int = []int {2, 4, 6, 8, 10}
	fmt.Println(ar)

	sort.Sort(ar)
	fmt.Println(ar)
}
