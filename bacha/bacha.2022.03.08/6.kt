fun main(args: Array<String>) {
    val (r, g, b) = readLine()!!.split(" ").map{ it.toInt() }
    println(
        if ((10*g + b) % 4 == 0) "YES"
        else "NO"
    )
}
