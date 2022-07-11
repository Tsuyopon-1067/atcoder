package main

import (
    "fmt"
    "bufio"
    "os"
    "sort"
    "strings"
    "strconv"
)

const BUFSIZE = 8000000
var rdr *bufio.Reader
func nextPermutation(x sort.Interface) bool { n := x.Len() - 1; if n < 1 { return false }; j := n - 1; for ; !x.Less(j, j+1); j-- { if j == 0 { return false } }; l := n; for !x.Less(j, l) { l-- }; x.Swap(j, l); for k, l := j+1, n; k < l; { x.Swap(k, l); k++; l--; }; return true }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { if v == "" {continue}; slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
type Point struct {y,x int}
func distance2(p,q Point)int{dx := p.x - q.x;dy := p.y - q.y;return dx*dx + dy*dy}
func readpoint() Point {y, x := readint2();return Point{y, x}}

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    k := readint()
    queenDef := make([]Point, k)
    for i := 0; i < k; i++ {
        queenDef[i] = readpoint()
        queenDef[i].y += 8
        queenDef[i].x += 8
    }

    ay := make([]int, 8)
    for x := 0; x < 8; x++ {
        ay[x] = x + 8
    }

    for {
        queenPos := make([]Point, 8)
        for i := 0; i < 8; i++ {
            queenPos[i] = Point{ay[i], 8+i}
        }

        queenOk:= true
        for i := 0; i < k; i++ {
            if ay[queenDef[i].x-8] != queenDef[i].y {
                queenOk = false
            }
        }
        if queenOk {
            //fmt.Println(ay)
            for i := 0; i < k; i++ {
                //fmt.Println(queenDef[i], queenDef[i].y-8, queenDef[i].x-8)
            }
            masu := make([][]bool, 24)
            for i := 0; i < 24; i++ {
                masu[i] = make([]bool, 24)
            }

            for i := 0; i < 8; i++ {
                t := queenPos[i]
                for i := -8; i < 8; i++ {
                    if i == 0 {
                        continue
                    }
                    masu[t.y+i][t.x] = true
                    masu[t.y][t.x+i] = true
                    masu[t.y+i][t.x+i] = true
                    masu[t.y-i][t.x+i] = true
                }
            }

            ok := true
            for i := 0; i < 8; i++ {
                t := queenPos[i]
                if masu[t.y][t.x] {
                    ok = false
                    break
                }
            }
            if ok {
                for i := 8; i < 16; i++ {
                    for j := 8; j < 16; j++ {
                        if ay[j-8] == i {
                            fmt.Print("Q")
                        } else {
                            fmt.Print(".")
                        }
                    }
                    fmt.Println()
                }
                break
            }
        }

        if !nextPermutation(sort.IntSlice(ay)) {
            break
        }
    }
}
