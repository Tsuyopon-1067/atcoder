fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toInt() }
    println(a xor b)
}
