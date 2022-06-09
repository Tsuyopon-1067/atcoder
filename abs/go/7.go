package main

import (
    "fmt"
)

func main() {
    var n int64
    fmt.Scanf("%d", &n)
    lst := make([]int64, 101)
    for i := int64(0); i < n; i++ {
        var d int64
        fmt.Scanf("%d", &d)
        lst[d]++
    }

    var ans int64
    for i := int64(0); i < 101; i++ {
        if (lst[i] > 0) {
            ans++
        }
    }
    fmt.Printf("%d\n", ans)
}
