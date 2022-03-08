fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    println(
        when {
            n <= 125 -> 4
            n <= 211 -> 6
            n <= 214 -> 8
            else -> -1
        }
    )
}