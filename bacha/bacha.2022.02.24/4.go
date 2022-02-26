package main
import "fmt"

func main() {
    var s string
    fmt.Scanf("%s", &s)
    var week [7]string = [7]string {"SUN","MON","TUE","WED","THU","FRI","SAT"}
    for i := 0; i < 7; i++ {
        if s == week[i] {
            fmt.Println(7 - i)
        }
    }
}
