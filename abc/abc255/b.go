package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
	"strings"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmin(a *int64, b int64) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int64, b int64) (res bool) { if res = *a < b; res { *a = b }; return }
func abs(x int64) int64 { if x >= 0 { return x } else { return -x } }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, k := readint2()
    a := readIntSlice()

    x := make([]int64, n)
    y := make([]int64, n)
    for i := int64(0); i < n; i++ {
        x[i], y[i] = readint2()
    }

    var lx []int64
    var ly []int64
    for i := int64(0); i < k; i++ {
        idx := a[i] - 1
        lx = append(lx, x[idx])
        ly = append(ly, y[idx])
    }


    d2 := make([]int64, n)
    for i := int64(0); i < n; i++ {
        tx := x[i]
        ty := y[i]
        d2[i] = INFL
        for j := int64(0); j < k; j++ {
            chmin(&d2[i], dd(tx, ty, lx[j], ly[j]))
        }
    }

    var rmx int64 = 0
    for i := int64(0); i < n; i++ {
        chmax(&rmx, d2[i])
    }

    fmt.Printf("%8f\n", math.Sqrt(float64(rmx)))
}

func dd(x1, y1, x2, y2 int64) int64 {
    dx := abs(x1-x2)
    dy := abs(y1-y2)
    return dx*dx + dy*dy
}

func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int64 { slice := make([]int64, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int64 { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return int64(v) }
func readint() int64 { return s2i(readline()) }
func readint2() (int64, int64) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
func readint3() (int64, int64, int64) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }
