package main

import (
    "fmt"
)

func main() {
    var s string
    fmt.Scanf("%s", &s)
    n := len(s)

// 5:dream
// 7:dreamer
// 5:erase
// 6:eraser
    ans := "YES"
    for n > 0 {
        if n >= 7 {
            if s[n-7:n] == "dreamer" {
                n -= 7
                continue
            }
        }
        if n >= 6 {
            if s[n-6:n] == "eraser" {
                n -= 6
                continue
            }
        }
        if n >= 5 {
            if s[n-5:n] == "dream" || s[n-5:n] == "erase" {
                n -= 5
                continue
            }
        }
        ans = "NO"
        break;
    }
    fmt.Printf("%s\n", ans)
}
