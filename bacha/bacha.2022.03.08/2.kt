fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toDouble() }
    println((a-b)*100/a)
}
