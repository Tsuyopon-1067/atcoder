fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map{ it.toInt() }
    var ans = 0
    for (i in 0 .. n-1) {
        if (a[i] >= 10) ans += a[i] - 10
    }
    println(ans)
}
