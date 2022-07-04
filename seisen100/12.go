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
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, m := readint2()
    g := make([][]int, n+1)
    for i := 0; i < n+1; i++ {
        g[i] = make([]int, n+1)
        for j := 0; j <= n; j++ {
            g[i][j] = 0
        }
    }
    for i := 0; i < m; i++ {
        x, y := readint2()
        g[x][y] = 1
        g[y][x] = 1
    }

    ans := 1
    for bit := 0; bit < (1 << uint(n)); bit++ {
        faction := make([]int, 0)
        for i := 0; i < n; i++ {
            if ((bit >> uint(i)) & 1 ) == 1 {
                faction = append(faction, i+1)
            }
        }
        can := true
        l := len(faction)
        for i := 0; i < l; i++ {
            for j := i+1; j < l; j++ {
                if g[faction[i]][faction[j]] != 1 {
                    can = false
                }
            }
        }
        if can {
            chmax(&ans, l)
        }
    }
    fmt.Println(ans)
}
