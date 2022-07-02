package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const BUFSIZE = 10000000
const INFL = 9000000000000000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    a := make([]int, n)
    b := make([]int, n)
    for i := 0; i < n; i++ {
        a[i], b[i] = readint2()
    }

    ans := INFL
    for i := 0; i < n; i++ {
        for j := 0; j < n; j++ {
            in := a[i]
            out := b[j]
            sum := 0
            for k := 0; k < n; k++ {
                sum += abs(in - a[k])
                sum += abs(a[k] - b[k])
                sum += abs(b[k] - out)
            }
            chmin(&ans, sum)
        }
    }
    fmt.Println(ans)
}
