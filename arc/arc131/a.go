package main

import (
    "fmt"
)

func main() {
    var a, b int
    fmt.Scanf("%d", &a)
    fmt.Scanf("%d", &b)

    bb := b*5
    fmt.Printf("%d%d\n", bb, a)
}
