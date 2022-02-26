package main

import (
    "fmt"
    "math"
)

func pow(a, b int64) int64 {
    var res int64 = 1
    for i := 0; int64(i) < b; i++ {
        res *= a
    }
    return res
}
func main() {
    var n int64
    fmt.Scanf("%d", &n)
    three := int(math.Log(float64(n)) / math.Log(3))
    five := int(math.Log(float64(n)) / math.Log(5))

    var ans bool = true
    for i := 1; i <= five; i++ {
        for j := 1; j <= three; j++ {
            if pow(5, int64(i)) + pow(3, int64(j)) == n {
                fmt.Printf("%d %d\n", j, i)
                ans = false
                i = five
                j = three
            }
        }
    }
    if ans {
        fmt.Println(-1)
    }
}
