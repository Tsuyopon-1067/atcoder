package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func pow2(n int) (res int) {
    res = 1
    for n > 0 {
        n--
        res *= 2
    }
    return
}
func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    t := readIntSlice()

    mx := 0
    for i := 0; i < n; i++ {
        pro := pow2(t[i])
        k := (mx/pro)/2 * 2 + 1
        tmp := 0
        for tmp <= mx {
            tmp = k*pro
            k += 2
        }
        if i == n-1 {
            fmt.Println(tmp)
        }
        mx = tmp
    }
}
