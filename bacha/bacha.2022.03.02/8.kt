fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    var r = 0
    var b = 0
    for (c in s) {
        when (c) {
            'R' -> ++r
            'B' -> ++b
        }
    }
    if (r > b) println("Yes")
    else println("No")
}
