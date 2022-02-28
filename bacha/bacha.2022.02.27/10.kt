fun main(args: Array<String>) {
    val (n, m) = readLine()!!.split(" ").map{ it.toInt() }
    println((n-1)*(m-1))
}
