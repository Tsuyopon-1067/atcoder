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
    for i := int64(0); i <= a && i*500 <= x; i++ {
        for j := int64(0); j <= b && i*500 + j*100 <= x; j++ {
            if (x - (i*500 + j*100)) / 50 <= c {
                ans++;
            }
        }
    }

    fmt.Printf("%d\n", ans)
}
