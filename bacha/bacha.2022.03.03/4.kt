fun main(args: Array<String>) {
    val (x, a) = readLine()!!.split(" ").map{ it.toInt() }
    if (x < a) println(0)
    else println(10)
}
