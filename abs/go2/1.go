package main

import (
    "fmt"
)

func main() {
    var a, b int64
    fmt.Scanf("%d %d", &a, &b)
    if (a*b%2 == 1) {
        fmt.Printf("Odd\n")
    } else {
        fmt.Printf("Even\n")
    }
}
