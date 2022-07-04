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
const INFL = 9000000000000000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
type Point struct {x,y int}
func compareToPoint(l, r Point)(res int){res = 0;if l.x<r.x{res=1}else if l.x>r.x{res=-1}else{if l.y<r.y{res=1}else if l.y>r.y{res=-1}};return res}
func lower_boundPoint(a []Point, x Point)int{ng:=-1;ok:=len(a);for{m:=(ok+ng)/2;if compareToPoint(a[m],x)<=0 {ok=m}else{ng=m};sa:=ok-ng;if sa<0 {sa=-sa};if sa<=1{res:=-1;if 0<= ok&&ok<len(a){if compareToPoint(a[ok],x)<=0 {res=ok}};return res}}}

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    m := readint()
    seiza := make([]Point, m)
    for i := 0; i < m; i++ {
        tx, ty := readint2()
        seiza[i] = Point{tx, ty}
    }
    n := readint()
    pic := make([]Point, n)
    for i := 0; i < n; i++ {
        tx, ty := readint2()
        pic[i] = Point{tx, ty}
    }

    sort.Slice(seiza, func(i, j int) bool {
        return compareToPoint(seiza[i], seiza[j]) > 0
    })
    sort.Slice(pic, func(i, j int) bool {
        return compareToPoint(pic[i], pic[j]) > 0
    })

    for i := 0; i < n; i++ {
        base := pic[i]
        ans := Point{base.x - seiza[0].x, base.y - seiza[0].y}
        ok := true
        for j := 0; j < m; j++ {
            t := Point{seiza[j].x + ans.x, seiza[j].y + ans.y}
            idx := lower_boundPoint(pic, t)
            found := Point{-1, -1}
            if 0 <= idx && idx < n {
                found = pic[idx]
            }
            exist := false
            if compareToPoint(t, found) == 0 {
                exist = true
            }
            if !exist {
                ok = false
                break
            }
        }
        if ok {
            fmt.Println(ans.x, ans.y)
            break
        }
    }
}
