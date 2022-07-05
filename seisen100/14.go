package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { if v == "" {continue}; slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, k := readint2()
    a := readIntSlice()

    ans := INFL
    for bit := 0; bit < (1 << uint(n)); bit++ {
        visibleList := make([]bool, n)
        count := 0
        for i := 0; i < n; i++ {
            if ((bit >> uint(i)) & 1 ) == 1 {
                visibleList[i] = true
                count++
            }
        }

        if count < k {
            continue
        }

        max := 0
        cost := 0
        for i := 0; i < n; i++ {
            if visibleList[i] {
                if a[i] <= max {
                    cost += max + 1 - a[i]
                    max = max + 1
                }
            }
            chmax(&max, a[i])
        }
        chmin(&ans, cost)
    }
    fmt.Println(ans)
}
