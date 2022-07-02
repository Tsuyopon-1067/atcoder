package main

import (
	"fmt"
	"strings"
)

func main() {
    var s string
    fmt.Scanf("%s", &s)
    n := strings.Count(s, "1");
    fmt.Printf("%d\n", n)
}
