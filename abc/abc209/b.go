package main

import (
    "fmt"
)

func main() {
    var n, x int
    fmt.Scanf("%d", &n)
    fmt.Scanf("%d", &x)
    var sum int
    for i := 0; i < n; i++ {
        var a int
        fmt.Scanf("%d", &a)
        if i % 2 == 1 {
            a--
        }
        sum += a
    }
    if sum <= x {
        fmt.Println("Yes")
    } else {
        fmt.Println("No")
    }
}
