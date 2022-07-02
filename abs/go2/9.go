package main

import (
	"fmt"
	"strings"
)

func main() {
    var s string
    fmt.Scanf("%s", &s)

    s = strings.Replace(s, "dream", "D", -1)
    s = strings.Replace(s, "erase", "E", -1)
    s = strings.Replace(s, "Der", "", -1)
    s = strings.Replace(s, "Er", "", -1)
    s = strings.Replace(s, "D", "", -1)
    s = strings.Replace(s, "E", "", -1)

    if (s == "") {
        fmt.Printf("YES\n")
    } else {
        fmt.Printf("NO\n")
    }
}
