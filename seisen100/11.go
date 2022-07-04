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
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, m := readint2()
    k := make([]int, m)
    s := make([][]int, m)
    for i := 0; i < m; i++ {
        s[i] = readIntSlice()
        k[i] = s[i][0]
        s[i] = s[i][1:]
    }
    p := readIntSlice()

    ans := 0
    for bit := 0; bit < (1 << uint(n)); bit++ {
        onSwList := make([]bool, n+1)
        for i := 0; i < n; i++ {
            if ((bit >> uint(i)) & 1 ) == 1 {
                onSwList[i+1] = true
            }
        }
        onLight := 0
        for i := 0; i < m; i++ {
            onSw := 0
            for j := 0; j < k[i]; j++ {
                if onSwList[s[i][j]] {
                    onSw++
                }
            }
            if onSw % 2 == p[i] {
                onLight++
            }
        }
        if onLight == m {
            ans++
        }
    }
    fmt.Println(ans)
}
