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
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    x := make([]int, n)
    y := make([]int, n)
    pole := make([][]bool, 5001)
    for i := 0; i < 5001; i++ {
        pole[i] = make([]bool, 5001)
    }
    for i := 0; i < n; i++ {
        x[i], y[i] = readint2()
        pole[x[i]][y[i]] = true
    }

    ans := 0
    for i := 0; i < n; i++ {
        for j := 0; j < n; j++ {
            if i == j {
                continue
            }
            dx := x[i] - x[j]
            dy := y[i] - y[j]
            x3 := x[j] - dy
            y3 := y[j] + dx
            x4 := x[i] - dy
            y4 := y[i] + dx
            if !hani4(x3, y3, x4, y4) {
                continue
            }
            if pole[x3][y3] && pole[x4][y4] {
                chmax(&ans, dx*dx + dy*dy)
            }
        }
    }
    fmt.Println(ans)
}
func hani4(a, b, c, d int) bool {
    return hani(a) && hani(b) && hani(c) && hani(d)
}
func hani(n int) bool {
    if 1 <= n && n <= 5000 {
        return true
    }
    return false
}
