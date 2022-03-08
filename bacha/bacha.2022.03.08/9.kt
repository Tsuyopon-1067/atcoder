fun main(args: Array<String>) {
    val (m, h) = readLine()!!.split(" ").map{ it.toInt() }
    println(
        if (h % m == 0) "Yes"
        else "No"
    )
}
