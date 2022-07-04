package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

<<<<<<< HEAD
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
=======
const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func upper_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] <= x { l = m+1 } else { r = m-1 } }; return l }
func gcd(a, b int) int { if b == 0 { return a }; return gcd(b, a%b) }
func lcm(a, b int) int { return a / gcd(a, b) * b }
func eratos(n int) []bool { res := make([]bool, n+1); for i := 0; i <= n; i++ { res[i] = true}; res[0], res[1] = false, false; for p := 2; p <= n; p++ { if res[p] { for q := p+p; q <= n; q += p { res[q] = false } } }; return res }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
>>>>>>> aa6a1cfdaf453a94ba1f853088f863c0ce684ec1

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    m := readint()
    seiza := make([]Point, m)
    for i := 0; i < m; i++ {
<<<<<<< HEAD
        tx, ty := readint2()
        seiza[i] = Point{tx, ty}
=======
        seiza[i].x, seiza[i].y = readint2()
>>>>>>> aa6a1cfdaf453a94ba1f853088f863c0ce684ec1
    }
    n := readint()
    pic := make([]Point, n)
    for i := 0; i < n; i++ {
<<<<<<< HEAD
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
=======
        pic[i].x, pic[i].y = readint2()
    }
    sort.Slice(seiza, func(i, j int) bool {
        if seiza[i].x != seiza[j].x {
            return seiza[i].x < seiza[j].x
        } else {
            return seiza[i].y < seiza[j].y
        }

    })
    sort.Slice(pic, func(i, j int) bool {
        if pic[i].x != pic[j].x {
            return pic[i].x < pic[j].x
        } else {
            return pic[i].y < pic[j].y
        }

    })

    for i := 0; i < n; i++ {
        flag := true;
        base := pic[i]
        dx, dy := seiza[0].x - base.x, seiza[0].y - base.y
        for j := 1; j < m; j++ {
            tx, ty := base.x + dx, base.y + dy
            t := Point{tx, ty}
            idx := PointLower_bound(pic, t)
            fmt.Println(idx)
            if 0 <= idx && idx < n {
                found := pic[idx]
                if PointCompare(found, t) != 0 {
                    flag = false
                    break
                }
            } else {
                flag = false
                break
            }
        }
        if flag {
            fmt.Println(dx, dy)
            fmt.Println("akdfjda;l;kjdflakdsfdsafj")
            return
        }
    }
}

type Point struct {
    x, y int
}
func PointCompare(l, r Point) int {
    if l.x > r.x {
        return 1
    } else if l.x < r.x {
        return -1
    } else if l.x == r.x {
        if l.y > r.y {
            return 1
        } else if l.y < r.y {
            return -1
        }
    }
    return 0
}
func PointLower_bound(a []Point, x Point) int {
    ng := -1; ok := len(a);
    for {
        m:=(ok+ng)/2;
        if PointCompare(a[m], x) >= 0 {ok=m}else{ng=m}
        sa:=ok-ng;if sa<0 {sa=-sa};
        if sa<=1 {
            res:=-1;if 0 <= ok && ok < len(a){
                if PointCompare(a[m], x) >= 0 {res=ok}
            };return res
        }
    }
}

func lower_bound(a []int, x int) int {
    ng := -1; ok := len(a);
    for {
        m := (ok+ng)/2; if a[m] >= x {ok = m} else {ng = m};
        sa := ok - ng; if sa < 0 { sa = -sa };
        if sa <= 1 {
            res := -1; if 0 <= ok && ok < len(a){
                if a[ok] >= x {res = ok}
            }; return res
>>>>>>> aa6a1cfdaf453a94ba1f853088f863c0ce684ec1
        }
    }
}
