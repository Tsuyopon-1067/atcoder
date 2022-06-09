package main

import (
    "fmt"
)

func count(n int64) int64 {
    var res int64 = 0
    for n > 0 {
        res += n % 10
        n /= 10
    }
    return res
}
func main() {
    var n, a, b int64
    fmt.Scanf("%d %d %d", &n, &a, &b)

    var ans int64 = 0
    for i := int64(1); i <= n; i++ {
        t := count(i)
        if a <= t && t <= b {
            ans += i
        }
    }
    fmt.Printf("%d\n", ans)
}
