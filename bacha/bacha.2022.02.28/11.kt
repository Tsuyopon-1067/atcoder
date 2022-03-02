fun main(args: Array<String>) {
    val (n, k) = readLine()!!.split(" ").map{ it.toInt() }
    val h = readLine()!!.split(" ").map{ it.toInt() }
    var ans = 0
    for (i in 0 .. n-1) {
        if (h[i] >= k) ++ans
    }
    println(ans)
}
