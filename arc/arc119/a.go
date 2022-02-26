package main

import (
    "fmt"
)

func min(a, b int64) int64{
    if a < b {
        return a
    } else {
        return b
    }
}
func main() {
    var n, a, b, c, ans int64
    fmt.Scanf("%d", &n)
    b = 1
    ans = 1000000000000000000
    for i := 0; i < 63; i++ {
        a = n / b
        c = n - (a * b)
        ans = min(a+int64(i)+c, ans)
        b *= 2
    }
    fmt.Println(ans)
}
