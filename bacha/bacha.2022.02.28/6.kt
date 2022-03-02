fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val h = readLine()!!.split(" ").map{ it.toInt() }
    var ans = 0
    for (i in 0 .. n-1) {
        if (ans < h[i]) ans = h[i]
        else break
    }
    println(ans)
}
