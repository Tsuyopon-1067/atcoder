package main

import (
    "fmt"
)

func main() {
    var a int64
    fmt.Scanf("%d", &a)
    var b, c int64
    fmt.Scanf("%d %d", &b, &c)
    var s string
    fmt.Scanf("%s", &s)
    fmt.Printf("%d %s\n", a+b+c, s)
}
