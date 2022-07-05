package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"sort"
	"strconv"
	"strings"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func nextPermutation(x sort.Interface) bool { n := x.Len() - 1; if n < 1 { return false }; j := n - 1; for ; !x.Less(j, j+1); j-- { if j == 0 { return false } }; l := n; for !x.Less(j, l) { l-- }; x.Swap(j, l); for k, l := j+1, n; k < l; { x.Swap(k, l); k++; l--; }; return true }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
type Point struct {x,y int}
func distance2(p,q Point)int{dx := p.x - q.x;dy := p.y - q.y;return dx*dx + dy*dy}

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    p := make([]Point, n)
    for i := 0; i < n; i++ {
        p[i].x, p[i].y = readint2()
    }
    idx := make([]int, n)
    for i := 0; i < n; i++ {
        idx[i] = i
    }

    sum := 0.0
    count := 0
    for {
        count++
        sum1 := 0.0
        for i := 0; i < n-1; i++ {
            d2 := distance2(p[idx[i]], p[idx[i+1]])
            sum1 += float64(math.Sqrt(float64(d2)))
        }
        sum += sum1
        if !nextPermutation(sort.IntSlice(idx)) {
            break
        }
    }
    fmt.Printf("%.7f\n", sum/float64(count))
}
