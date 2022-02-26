package main

import (
    "fmt"
)

func main() {
    var a, b int64
    fmt.Scanf("%d", &a)
    fmt.Scanf("%d", &b)
    fmt.Println(a + 500000000*b)
}
