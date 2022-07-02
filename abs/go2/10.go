package main

import (
    "fmt"
)

func abs(x int64) int64 { if x >= 0 { return x } else { return -x } }

func main() {
    var n int64
    fmt.Scanf("%d", &n)

    t := make([]int64, n+1)
    x := make([]int64, n+1)
    y := make([]int64, n+1)
    t[0] = 0
    x[0] = 0
    y[0] = 0

    ans := "Yes"
    for i := int64(1); i <= n; i++ {
        fmt.Scanf("%d %d %d", &t[i], &x[i], &y[i])

        d := abs(x[i] - x[i-1]) + abs(y[i] - y[i-1])
        dt := t[i] - t[i-1]
        if (dt < d || d%2 != dt % 2) {
            ans = "No"
        }
    }
    fmt.Printf("%s\n", ans)
}
