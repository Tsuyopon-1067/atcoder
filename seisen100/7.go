package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

type Ppoint struct {
    x, y int
}

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    x := make([]int, n)
    y := make([]int, n)
    mp := make(map[Ppoint]bool)

    for i := 0; i < n; i++ {
        x[i], y[i] = readint2()
        var p Point
        p.x = x[i]
        p.y = y[i]
        mp[p] = true
    }

    ans := 0
    for i := 0; i < n; i++ {
        for j := 0; j < n; j++ {
            if i == j {
                continue
            }
            dx := x[j] - x[i]
            dy := y[j] - y[i]
            x3, y3 := x[j] - dy, y[j] + dx
            x4, y4 := x[i] - dy, y[i] + dx
            if hani(x3) && hani(y3) && hani(x4) && hani(y4) {
                if xflag[x3] && yflag[x3] == y3 && xflag[x4] && yflag[x4] == y4 {
                    chmax(&ans, dx*dx + dy*dy)
                }
            }
        }
    }
    fmt.Println(ans)
}
func hani(n int) bool {
    return 0 <= n && n <= 5000
}
