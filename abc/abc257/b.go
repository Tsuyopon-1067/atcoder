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
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint3() (int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, k, q := readint3()
    a := readIntSlice()
    l := readIntSlice()

    for i := 0; i < q; i++ {
        if a[l[i]-1] == n {
            continue
        }
        if l[i] != k && a[l[i]-1] + 1 == a[l[i]] {
            continue
        }
        a[l[i]-1]++
    }
    for i := 0; i < k; i++ {
        fmt.Printf("%d ", a[i])
    }
    fmt.Println()
}
