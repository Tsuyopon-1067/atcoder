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
const MOD = 998244353
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
func readint3() (int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, q := readint2()
    a := readIntSlice()
    c := make([]int, n)
    d := make([]int, n)
    c[n-1] = 1
    for i := n-2; i >= 0; i-- {
        c[i] = c[i+1] + 1
    }
    d[n-1] = 1
    for i := n-2; i >= 0; i-- {
        d[i] = d[i+1] + c[i]
    }

    for i := 0; i < q; i++ {
        tmp := readIntSlice()
        if tmp[0] == 1 {
            x, v := tmp[1], tmp[2]
            a[x-1] = v
        } else if tmp[0] == 2 {
            x := tmp[1]
            ans := 0
            for i := n-x; i < n; i++ {
                ans += a[i] * d[i]
                ans %= MOD
            }
            fmt.Println(ans)
        }
    }
}
