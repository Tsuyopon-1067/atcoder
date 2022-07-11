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
func lower_bound(a []int, x int) int {ng := -1;ok := len(a);for{m:=(ok+ng)/2;if a[m]>=x{ok=m}else{ng=m};sa:=ok-ng;if sa<0 {sa=-sa};if sa<=1{res:=len(a);if 0 <=ok&&ok<len(a){if a[ok]>=x{res=ok}};return res}}}
func upper_bound(a []int,x int)int{ng:=-1;ok:=len(a);for{m:=(ok+ng)/2;if a[m]>x{ok=m}else{ng=m};sa:=ok-ng;if sa<0 {sa=-sa};if sa <= 1{res := len(a);if 0 <=ok&&ok<len(a){if a[ok]>x{res=ok}};return res}}}
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { if v == "" {continue}; slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    s := readIntSlice()
    q := readint()
    t := readIntSlice()
    sort.Slice(s, func(i, j int) bool {
        return s[i] < s[j]
    })

    ans := 0
    for i := 0; i < q; i++ {
        idx := lower_bound(s, t[i])
        if idx < n {
            if s[idx] == t[i] {
                ans++
            }
        }
    }
    fmt.Println(ans)
}
