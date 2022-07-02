package main

import (
    "fmt"
)

func main() {
    var n, y int64
    fmt.Scanf("%d %d", &n, &y)

    for i := int64(0); i <= n; i++ {
        for j := int64(0); i+j <= n; j++ {
            k := n - (i+j)
            if (10000*i + 5000*j + 1000*k == y) {
                fmt.Printf("%d %d %d\n", i, j, k)
                return
            }
        }
    }
    fmt.Printf("-1 -1 -1\n")
}
