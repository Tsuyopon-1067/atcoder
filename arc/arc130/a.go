package main

import (
    "fmt"
    "bufio"
    "os"
    "strconv"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    s := readline()

    serial := 0
    ans := 0
    for i := 1; i < n; i++ {
        if s[i-1] == s[i] {
            serial++
        }
        if s[i-1] != s[i] || i == n-1 {
            ans += (serial * (serial+1))/2
            serial = 0
        }
    }
    fmt.Println(ans)
}
