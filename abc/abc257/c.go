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
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    s := readline()
    w := readIntSlice()

    children := make([]int, 0)
    adults := make([]int, 0)

    for i := 0; i < n; i++ {
        if s[i] == '0' {
            children = append(children, w[i])
        } else if s[i] == '1' {
            adults = append(adults, w[i])
        }
    }
    sort.Slice(children, func(i, j int) bool {
        return children[i] < children[j]
    })
    sort.Slice(adults, func(i, j int) bool {
        return adults[i] < adults[j]
    })

    x := 0
    ka, kc := 0, len(children)
    i, j := 0, 0
    for i := 0; i < len(children); i++ {
        for ; j < len(children); j++ {

        }
    }
    fmt.Println(ans)
    fmt.Println(adults, children)
}
