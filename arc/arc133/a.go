package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    a := readIntSlice()

    x := 0
    for i := 0; i < n; i++ {
        x = a[i]
        if i+1 < n {
            if a[i] > a[i+1] {
                break
            }
        }
    }
    for i := 0; i < n; i++ {
        if a[i] != x {
            fmt.Printf("%d ", a[i])
        }
    }
    fmt.Println()
}
