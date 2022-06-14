package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint3() (int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, l, w := readint3()
    a := readIntSlice()
    a = append(a, l)

    ans, tail := 0, 0
    for i := 0; i < n+1; i++ {
        if tail < a[i] {
            ans += (a[i] - tail + (w-1)) / w
        }
        tail = a[i] + w
    }
    fmt.Println(ans)
}
