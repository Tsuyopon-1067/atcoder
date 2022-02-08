package main
import "fmt"

func main(){
	var w, h, n int
	fmt.Scanf("%d %d %d", &w, &h, &n)

	var x [100]int
	var y [100]int
	var a [100]int
	for i := 0; i < n; i++{
		fmt.Scanf("%d %d %d", &x[i], &y[i], &a[i])
	} 

	var sq [100][100] int
	for i := 0; i < n; i++{
		switch(a[i]){
			case 1:
				for j := 0; j < x[i]; j++{
					for k := 0; k < h; k++{
						sq[j][k] = 1
					}
				}
			case 2:
				for j := x[i]; j < w; j++{
					for k := 0; k < h; k++{
						sq[j][k] = 2
					}
				}
			case 3:
				for j := 0; j < w; j++{
					for k := 0; k < y[i]; k++{
						sq[j][k] = 3
					}
				}
			case 4:
				for j := 0; j < w; j++{
					for k := y[i]; k < h; k++{
						sq[j][k] = 4
					}
				}
		}
	}
	var res int
	for i := 0; i < w; i++{
		for j := 0; j < h; j++{
			if sq[i][j] == 0{
				res++
			}
		}
	}

	fmt.Println(res)
	
	/*
	for i := h-1; i >= 0; i--{
		for j := 0; j < w; j++{
			fmt.Print(sq[j][i])
		}
		fmt.Println("")
	}*/
}
