package main

import (
    "fmt"
)

func main() {
    var s []string
    for i := 0; i < 4; i++ {
        var tmp string
        fmt.Scanf("%s", &tmp)
        s = append(s, tmp)
    }

    var sum int64
    for i := 0; i < 4; i++ {
        if s[i] == "H" {
            sum += 1;
        }
        if s[i] == "2B" {
            sum += 2;
        }
        if s[i] == "3B" {
            sum += 3;
        }
        if s[i] == "HR" {
            sum += 4;
        }
    }
    if sum == 10 {
        fmt.Println("Yes")
    } else {
        fmt.Println("No")
    }
}
