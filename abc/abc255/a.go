package main

import (
    "fmt"
)

func main() {
    var r, c int64
    fmt.Scanf("%d %d", &r, &c)

    a := make([][]int64, 3)
    for i := int64(0); i < 3; i++ {
        a[i] = make([]int64, 3)
    }
    fmt.Scanf("%d %d", &a[1][1], &a[1][2])
    fmt.Scanf("%d %d", &a[2][1], &a[2][2])
    fmt.Printf("%d", a[r][c])
}
