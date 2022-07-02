package main

import (
    "fmt"
)

func main() {
    var a, b, c, x int64
    fmt.Scanf("%d", &a)
    fmt.Scanf("%d", &b)
    fmt.Scanf("%d", &c)
    fmt.Scanf("%d", &x)

    var ans int64 = 0
    for i := int64(0); i <= a; i++ {
        for j := int64(0); j <= b; j++ {
            for k := int64(0); k <= c; k++ {
                if 500*i + 100*j + 50*k == x {
                    ans++
                }
            }
        }
    }
    fmt.Printf("%d\n", ans)
}
