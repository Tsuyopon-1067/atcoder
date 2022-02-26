package main

import (
    "fmt"
    "strings"
)

func main() {
    var s string
    fmt.Scanf("%s", &s)
    str := strings.Split(s, "")
    if len(str) == 2 {
        fmt.Println(s)
    } else {
        for i := 2; i >= 0; i-- {
            fmt.Print(str[i])
        }
        fmt.Println("")
    }
}
