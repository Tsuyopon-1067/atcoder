fun main(args: Array<String>) {
    val s = readLine()!!
    var ans = "Good"
    for (i in 0 .. 2) {
        if (s[i] == s[i+1]) ans = "Bad"
    }
    println(ans)
}
