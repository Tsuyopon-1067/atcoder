fun main(args: Array<String>) {
    val (m, d) = readLine()!!.split(" ").map{ it.toInt() }
    var ans = 0
    for (mm in 1 .. m) for (dd in 1 .. d) {
        val d1 = dd % 10
        val d10 = dd / 10
        if ((d1 * d10 == mm) and (d1 >= 2) and (d10 >= 2)) ++ans
    }
    println(ans)
}
