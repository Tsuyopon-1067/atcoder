fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toDouble() }
    val ans = (a+b)/2
    if (ans % 1 > 0) println("IMPOSSIBLE")
    else println(ans.toInt())
}
