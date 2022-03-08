fun main(args: Array<String>) {
    val (n, s, d) = readLine()!!.split(" ").map{ it.toInt() }
    var ans = "No"
    for (i in 1 .. n) {
        val (x, y) = readLine()!!.split(" ").map{ it.toInt() }
        if ((x < s) and (d < y)) ans = "Yes"
    }
    println(ans)
}
