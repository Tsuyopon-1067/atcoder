fun main(args: Array<String>) {
    val s = readLine()!!
    val n = s.length
    var ans = 0
    for (i in 0 .. n/2-1) {
        if (s[i] != s[n-1-i]) ++ans
         
    }
    println(ans)
}
