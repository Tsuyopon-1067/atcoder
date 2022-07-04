package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { if v == "" {break}; slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    r, c := readint2()
    a := make([][]int, r)
    for i := 0; i < r; i++ {
        a[i] = readIntSlice()
    }

    ans := 0
    for bit := 0; bit < (1 << uint(r)); bit++ {
        fb := make([]int, r) // 1:kaesu
        for i := 0; i < r; i++ {
            if ((bit >> uint(i)) & 1 ) == 1 {
                fb[i] = 1
            }
        }
        fr := make([]int, c)
        for j := 0; j < c; j++ {
            for i := 0; i < r; i++ {
                fr[j] += (fb[i] ^ a[i][j]) // 01 10
            }
            if fr[j] <= r/2 {
                fr[j] = r - fr[j]
            }
        }
        sum := 0
        for _, v := range fr {
            sum += v
        }
        chmax(&ans, sum)
    }
    fmt.Println(ans)
}
