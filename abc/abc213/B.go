package main
import "fmt"

func main(){
	var N int
	var idxM1 int
	var idxM2 int
	fmt.Scan(&N)
	var A[200000]int
	for i := 0; i < N; i++{
		fmt.Scan(&A[i])
		if A[i] > A[idxM1]{
			 idxM1 = i
		}
	}
	A[idxM1] = 0
	for i := 0; i < N; i++{
		if A[i] > A[idxM2]{
			 idxM2 = i
		}
	}
	fmt.Println(idxM2+1)
}
