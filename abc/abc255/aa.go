package main

import (
    "fmt"
)

func main() {
    var x, a, d, n int64
    fmt.Scanf("%d %d %d %d", &x, &a, &d, &n)

    if (d < 0) {
        a = an(a, d, n)
        d = -d
    }

    var l, r int64 = 1, n
    for i := int64(0); i < 100; i++ {
        m := (l+r)/2
        if an(a, d, m) < x {
            l = m
        } else {
            r = m
        }
    }

    ans1n := an(a, d, l)
    ans2n := an(a, d, l+1)

    ans1 := abs(x-ans1n)
    ans2 := abs(x-ans2n)
    var ans int64
    if ans1 < ans2 {
        ans = ans1
    } else {
        ans = ans2
    }
    fmt.Printf("%d\n", ans)
}

func abs(x int64) int64 { if x >= 0 { return x } else { return -x } }
func an(a, d, n int64) int64 {
    return a + d*(n-1)
}
