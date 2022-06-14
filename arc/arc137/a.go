package main

import (
    "fmt"
)

func gcd(a, b int) int {
    if a % b == 0 {
        return b
    }
    return gcd (b, a%b)
}
func main() {
    var l, r int
    fmt.Scanf("%d %d", &l, &r)

    for i := 0; i < 10000; i++ {
        for j := 0; j <= i; j++ {
            x := l + j
            y := r + j - i
            if gcd(x, y) == 1 {
                fmt.Println(y-x)
                return
            }
        }
    }
}
