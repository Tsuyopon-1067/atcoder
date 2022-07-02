package main

import (
    "fmt"
)

func main() {
    var n int64
    fmt.Scanf("%d", &n)
    k := make([]int64, 101)
    for i := int64(0); i < n; i++ {
        var d int64
        fmt.Scanf("%d", &d)
        k[d]++
    }

    var ans int64 = 0
    for i := int64(0); i < 101; i++ {
        if k[i] > 0 {
            ans++
        }
    }
    fmt.Printf("%d\n", ans)
}
