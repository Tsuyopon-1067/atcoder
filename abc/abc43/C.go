package main
import "fmt"

func main(){
	var n int
	fmt.Scanf("%d", &n)

	var a[100] int
	for i := 0; i < n; i++{
		fmt.Scanf("%d", &a[i])
	}

	var cost[201] int
	for i := -100; i <= 100; i++{
		for j := 0; j < n; j++{
			cost[i + 100] += (i-a[j])*(i-a[j])
		}
	}

	var min int = cost[0]
	for i := 1; i <= 200; i++{
		if min > cost[i]{
			min = cost[i]
		}
	}

	fmt.Print(min)
}
