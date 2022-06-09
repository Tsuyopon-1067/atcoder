package main

import (
    "fmt"
)

func main() {
    var n int64
    fmt.Scanf("%d", &n)

    var ans int64 = 100
    for i := int64(0); i < n; i++ {
        var a int64
        fmt.Scanf("%d", &a)

        t := div(a)
        if t < ans {
            ans = t
        }
    }
    fmt.Printf("%d\n", ans)
}
func div(n int64) int64 {
    var res int64 = 0
    for n % 2 == 0 {
        res++
        n /= 2
    }
    return res
}
