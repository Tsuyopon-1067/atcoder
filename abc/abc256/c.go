package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
    "sort"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func lower_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] < x { l = m+1 } else { r = m-1 } }; return l }
func upper_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] <= x { l = m+1 } else { r = m-1 } }; return l }
func gcd(a, b int) int { if b == 0 { return a }; return gcd(b, a%b) }
func lcm(a, b int) int { return a / gcd(a, b) * b }
func eratos(n int) []bool { res := make([]bool, n+1); for i := 0; i <= n; i++ { res[i] = true}; res[0], res[1] = false, false; for p := 2; p <= n; p++ { if res[p] { for q := p+p; q <= n; q += p { res[q] = false } } }; return res }
func eratosint (n int) []int { lst := eratos(n); res := make([]int, 0); for i := 2; i <= n; i++ { if lst[i] { res = append(res, i) } }; return res }
func nextPermutation(x sort.Interface) bool { n := x.Len() - 1; if n < 1 { return false }; j := n - 1; for ; !x.Less(j, j+1); j-- { if j == 0 { return false } }; l := n; for !x.Less(j, l) { l-- }; x.Swap(j, l); for k, l := j+1, n; k < l; { x.Swap(k, l); k++; l--; }; return true }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint6() (int, int, int, int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]), s2i(lines[3]), s2i(lines[4]), s2i(lines[5]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    h := make([]int, 3)
    w := make([]int, 3)
    h[0], h[1], h[2], w[0], w[1], w[2] = readint6()

    masu := make([][]int, 3)
    for i := int(0); i < 3; i++ {
        masu[i] = make([]int, 3)
    }
    ans := 0
    for masu[0][0] = 1; masu[0][0] < h[0]; masu[0][0]++ {
        for masu[0][1] = 1; masu[0][0] + masu[0][1] < h[0]; masu[0][1]++ {
            for masu[1][0] = 1; masu[1][0] < h[1]; masu[1][0]++ {
                for masu[1][1] = 1; masu[1][0] + masu[1][1] < h[1]; masu[1][1]++ {
                    masu[0][2] = h[0] - (masu[0][0] + masu[0][1])
                    masu[1][2] = h[1] - (masu[1][0] + masu[1][1])
                    masu[2][0] = w[0] - (masu[0][0] + masu[1][0])
                    masu[2][1] = w[1] - (masu[0][1] + masu[1][1])
                    masu[2][2] = h[2] - (masu[2][0] + masu[2][1])

                    mainasu := false
                    for j := 0; j < 3; j++ {
                        for k := 0; k < 3; k++ {
                            if masu[j][k] <= 0 {
                                mainasu = true
                                break
                            }
                        }
                    }
                    if mainasu {
                        continue
                    }

                    h0, h1, h2, w0, w1, w2 := 0, 0, 0, 0, 0, 0
                    for j := 0; j < 3; j++ {
                        h0 += masu[0][j]
                        h1 += masu[1][j]
                        h2 += masu[2][j]
                        w0 += masu[j][0]
                        w1 += masu[j][1]
                        w2 += masu[j][2]
                    }
                    if h0 == h[0] && h1 == h[1] && h2 == h[2] && w0 == w[0] && w1 == w[1] && w2 == w[2] {
                        ans++
                    }
                }
            }
        }
    }
    fmt.Println(ans)
}
