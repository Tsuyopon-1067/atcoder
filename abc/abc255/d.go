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
func chmin(a *int64, b int64) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int64, b int64) (res bool) { if res = *a < b; res { *a = b }; return }
func abs(x int64) int64 { if x >= 0 { return x } else { return -x } }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int64 { slice := make([]int64, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int64 { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return int64(v) }
func readint() int64 { return s2i(readline()) }
func readint2() (int64, int64) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
func readint3() (int64, int64, int64) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }
func readint4() (int64, int64, int64) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)

    n, q := readint2()
    a := readIntSlice()
    sort.Slice(a, func(i, j int) bool {
        return a[i] < a[j]
    })
    s := make([]int64, n)
    s[0] = a[0]
    for i := int64(1); i < n; i++ {
        s[i] = s[i-1] + a[i]
    }

    for i := int64(0); i < q; i++ {
        x := readint()
        idx := lower_bound(a, x)
        ans := anst(a, s, n, idx, x)
        fmt.Printf("%d\n", ans)
    }
}

func an(a, d, n int64) int64 {
    return a + d*(n-1)
}
func anst(a, s []int64, n, idx, x int64) int64 {
    var ans int64
    if idx-1 < 0 {
        ans = s[n-1] - n*x
    } else if n <= idx {
        ans = n*x - s[n-1]
    } else {
        ans = idx*x - s[idx-1] + (s[n-1]-s[idx-1]) - (n-idx)*x
    }

    return ans
}
func lower_bound(a []int64, x int64) int64 {
    n := int64(len(a))
    if x < a[0] {
        return -1
    }
    if a[n-1] < x {
        return n
    }
    var l, r, m int64 = 0, n-1, 0
    for l <= r {
        m = (l+r)/2
        if a[m] < x {
            l = m+1
        } else {
            r = m-1
        }
    }
    return l
}

