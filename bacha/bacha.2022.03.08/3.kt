fun main(args: Array<String>) {
    val (n, m) = readLine()!!.split(" ").map{ it.toInt() }
    val nc2 = n*(n-1)/2
    val mc2 = m*(m-1)/2
    println(nc2 + mc2)
}
