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
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    r := readIntSlice()
    c := readIntSlice()
    q := readint()

    for i := 0; i < q; i++ {
        tr, tc := readint2()
        if r[tr-1] + c[tc-1] >= n+1 {
            fmt.Print("#")
        } else  {
            fmt.Print(".")
        }
    }
    fmt.Println()
}
