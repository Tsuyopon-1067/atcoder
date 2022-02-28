fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    var ans = "Yes"
    if (n % 2 == 1) ans = "No"
    if (s.substring(0, n/2) != s.substring(n/2, n)) ans = "No"
    println(ans)
}
