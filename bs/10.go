//白昼夢
package main

import (
	"fmt"
	"strings"
)

func main() {
	var S string
	fmt.Scan(&S)

	S = strings.Replace(S, "erase", "pr", -1)

	S = strings.Replace(S, "dreamer", "", -1)
	S = strings.Replace(S, "prr", "", -1)
	S = strings.Replace(S, "dream", "", -1)
	S = strings.Replace(S, "pr", "", -1)

	if S == "" {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
