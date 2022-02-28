fun main(args: Array<String>) {
    val (x, y) = readLine()!!.split(" ").map{ it.toInt() }
    var xx = if (x < y) y else x
    var yy = x + y - xx
    println(
        if (xx - yy < 3) "Yes" else "No"
           )
}
