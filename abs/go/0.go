package main

import (
    "fmt"
)

func main() {
    var a, b, c int64
    fmt.Scanf("%d", &a)
    fmt.Scanf("%d %d", &b, &c)
    var s string
    fmt.Scanf("%s", &s)
    fmt.Println((a+b+c), s)
}
