package main
import "fmt"

func main() {
    var ck[4] int
    var g int
    for i := 0; i < 4; i++ {
        fmt.Scanf("%d", &ck[i])
        g += ck[i]
    }
    if g % 2 > 0 {
        g = -1
    } else {
        g /= 2
    }

    var ans bool = false
    for i := 0; i < 16; i++ {
        var a, b, c, d, ii, sum int
        ii = i
        a = ii / 8
        ii %= 8
        b = ii / 4
        ii %= 4
        c = ii / 2
        d = ii % 2
        sum = a*ck[0] + b*ck[1] + c*ck[2] + d*ck[3]
        if sum == g {
            ans = true
        }
    }
    if ans {
        fmt.Println("Yes")
    } else {
        fmt.Println("No")
    }
}
