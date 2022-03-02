fun main(args: Array<String>) {
    val s = readLine()!!
    val n = s.length
    for (i in 1 .. n) {
        val c = s[n-i]
        print(
            when(c) {
                '6' -> '9'
                '9' -> '6'
                else -> c
            }
             )
    }
    println()
}
