fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toInt() }
    val (c, d) = readLine()!!.split(" ").map{ it.toInt() }
    println(a*d - b*c)
}
