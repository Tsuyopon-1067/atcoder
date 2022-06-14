package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func lower_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if x < a[0] { return -1 }; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] < x { l = m+1 } else { r = m-1 } }; return l }
func upper_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if x < a[0] { return -1 }; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] <= x { l = m+1 } else { r = m-1 } }; return l }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, k := readint2()
    a := readIntSlice()

    s := 0
    for i := 0; i < k; i++ {
        s += a[i]
    }

    b := make([]int, n)
    copy(b, a)
    sort.Slice(b, func(i, j int) bool {
        return b[i] > b[j]
    })
    mx := 0
    for i := 0; i < k; i++ {
        mx += b[i]
    }
    if mx <= s {
        fmt.Println(-1)
        return
    }

    lmx := a[k:]
    tmp := 0
    for i, _ := range lmx {
        chmax(&tmp, lmx[i])
        lmx[i] = tmp
    }

    ans := INFL
    for i := 0; i < k; i++ {
        j := upper_bound(lmx, a[i])
        chmin(&ans, k + abs(j - i))
    }
    fmt.Println(ans)
}
