fun main(args: Array<String>) {
    val (x, y) = readLine()!!.split(" ").map{ it.toString() }
    if (x[0] < y[0]) println("<")
    else if (x[0] > y[0]) println(">")
    else println("=")
}
