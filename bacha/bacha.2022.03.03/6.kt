fun main(args: Array<String>) {
    val (n, k, a) = readLine()!!.split(" ").map{ it.toInt() }
    println((a+k-2)%n+1)
}
