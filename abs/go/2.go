package main

import (
    "fmt"
)

func main() {
    var s string
    fmt.Scanf("%s", &s)
    var ans int64 = 0
    for i := 0; i < 3; i++ {
        if s[i] == '1' {
            ans++
        }
    }
    fmt.Printf("%d\n", ans);
}
