fun main(args: Array<String>) {
    val s = readLine()!!
    var ans = 0
    for (c in s) {
        when (c) {
            '+' -> ++ans
            '-' -> --ans
        }
    }
    println(ans)
}
