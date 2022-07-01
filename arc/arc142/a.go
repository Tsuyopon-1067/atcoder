package main

import (
    "fmt"
)

func main() {
    var n, k int
    fmt.Scanf("%d %d", &n, &k)

    x := k
    tk := k
    xr := 0
    for x % 10 == 0 {
        x /= 10
    }
    for tk > 0 {
        xr *= 10
        xr += tk % 10
        tk /= 10
    }

    if x < k || xr < k {
        fmt.Println(0)
        return
    }

    mp := make(map[int]bool)
    for x <= n {
        mp[x] = true
        x *= 10
    }
    for xr <= n {
        mp[xr] = true
        xr *= 10
    }
    fmt.Println(len(mp))
}
