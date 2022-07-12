package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func lower_bound(a []int, x int) int {ng := -1;ok := len(a);for{m:=(ok+ng)/2;if a[m]>=x{ok=m}else{ng=m};sa:=ok-ng;if sa<0 {sa=-sa};if sa<=1{res:=len(a);if 0 <=ok&&ok<len(a){if a[ok]>=x{res=ok}};return res}}}
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { if v == "" {continue}; slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    d := make([]int, 1)
    d[0] = readint()
    n := readint()
    m := readint()
    for i := 0; i < n-1; i++ {
        t := readint()
        d = append(d, t)
    }
    d = append(d, 0)
    sort.Slice(d, func(i, j int) bool {
        return d[i] < d[j]
    })
    k := make([]int, m)
    for i := 0; i < m; i++ {
        k[i] = readint()
    }

    ans := 0
    for i := 0; i < m; i++ {
        xIdx := lower_bound(d, k[i])
        yIdx := xIdx - 1
        if yIdx < 0 {
            yIdx = 0
        }
        xs := d[xIdx]
        xAns := abs(k[i] - xs)
        ys := d[yIdx]
        yAns := abs(k[i] - ys)
        ans += min(xAns, yAns)
    }
    fmt.Println(ans)
}
func min(a, b int) int {
    if a < b {
        return a
    } else {
        return b
    }
}
