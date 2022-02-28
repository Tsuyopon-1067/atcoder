fun main(args: Array<String>) {
    var (a, b) = readLine()!!.split(" ").map{ it.toLong() }
    var ans = "Easy"
    while (a + b > 0) {
        if (a%10 + b%10 >= 10) ans = "Hard"
        a /= 10
        b /= 10
    }
    println(ans)
}
