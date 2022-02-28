fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toDouble() }
    println(((a - b)/a)*100)
}
