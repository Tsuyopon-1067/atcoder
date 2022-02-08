package main
import "fmt"

func main(){
	var n, k int
	fmt.Scanf("%d %d", &n, &k)
	hate := make([]int, k)

	for i := 0; i < k; i++{
		fmt.Scanf("%d", &hate[i])
	}

label1:
	for i := n; i < 100000; i++{
		n = i
		var len int = digit_len(n)

		var digit[5] int
		
		for j := 0; j < len; j++{
			digit[j] = n%10
			n /= 10
			for l := 0; l < k; l++{
				if digit[j] == hate[l]{
					continue label1
				}
			}
		}
		fmt.Print(i)
		break label1
	}
}

func digit_len(n int) int{
	var res int
	for{
		res++
		n /= 10
		if n == 0{
			break
		}
	}
	return res
}
