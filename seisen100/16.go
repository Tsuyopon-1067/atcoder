package main

import (
	"bufio"
	"fmt"
	"os"
	"reflect"
	"sort"
	"strconv"
	"strings"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func nextPermutation(x sort.Interface) bool { n := x.Len() - 1; if n < 1 { return false }; j := n - 1; for ; !x.Less(j, j+1); j-- { if j == 0 { return false } }; l := n; for !x.Less(j, l) { l-- }; x.Swap(j, l); for k, l := j+1, n; k < l; { x.Swap(k, l); k++; l--; }; return true }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { if v == "" {continue}; slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    p := readIntSlice()
    q := readIntSlice()

    base := make([]int, n)
    for i := 0; i < n; i++ {
        base[i] = i+1;
    }

    pIdx, qIdx := 0, 0
    for i := 0; ; i++ {
        if reflect.DeepEqual(base, p) {
            pIdx = i
        }
        if reflect.DeepEqual(base, q) {
            qIdx = i
        }
        if !nextPermutation(sort.IntSlice(base)) {
            break
        }
    }
    fmt.Println(abs(pIdx - qIdx))
}
