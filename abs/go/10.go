package main

import (
    "fmt"
)
func abs(x int64) int64 { if x >= 0 { return x } else { return -x } }
func main() {
    var n int64
    fmt.Scanf("%d", &n)

    var nx, ny, nt int64 = 0, 0, 0
    ans := "Yes"
    for i := int64(0); i < n; i++ {
        var t, x, y int64
        fmt.Scanf("%d %d %d", &t, &x, &y)

        d := abs(nx - x) + abs(ny - y)
        dt := t - nt
        if (dt < d || d%2 != dt%2) {
            ans = "No"
            break
        }

        nx, ny, nt = x, y, t
    }
    fmt.Printf("%s\n", ans)
}
