package main

import (
	"fmt"
	"strings"
)

func main() {
    var n int
    fmt.Scanf("%d", &n)
    var s string
    fmt.Scanf("%s", &s)

    s = strings.Replace(s, "A", "BB", -1)
    s = strings.Replace(s, "BB", "A", -1)
    fmt.Println(s)
}
