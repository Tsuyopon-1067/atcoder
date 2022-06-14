package main

import (
    "fmt"
)

const MOD int = 998244353

func solve(x int, mp map[int]int) int {
    if x < 4 {
        return x
    }
    x1 := x/2
    x2 := (x+1)/2

    var s1, s2 int
    if mp[x1] != 0 {
        s1 = mp[x1]
    } else {
        s1 = solve(x1, mp)
        mp[x1] = s1
    }
    if mp[x2] != 0 {
        s2 = mp[x2]
    } else {
        s2 = solve(x2, mp)
        mp[x2] = s2
    }

    return (s1 * s2) % MOD
}
func main() {
    mp := make(map[int]int)
    var x int
    fmt.Scanf("%d", &x)
    mp[100] = -100
    fmt.Println(solve(x, mp))
}
