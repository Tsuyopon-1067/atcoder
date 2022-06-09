package main

import (
    "fmt"
    "sort"
)

func abs(x int64) int64 { if x >= 0 { return x } else { return -x } }
func main() {
    var n int64
    fmt.Scanf("%d", &n)

    var alice, bob int64 = 0, 0;
    a := make([]int64, n)
    for i := int64(0); i < n; i++ {
        fmt.Scanf("%d", &a[i])
    }
    sort.Slice(a, func(i, j int) bool {
        return a[i] > a[j]
    })

    for i := int64(0); i < n; i++ {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }
    fmt.Printf("%d\n", abs(alice - bob))
}
