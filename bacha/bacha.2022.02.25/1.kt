fun main() {
    var n = readLine()!!.toInt()
    println(
        when {
            1 <= n && n <= 125 -> 4
            126 <= n && n <= 211 -> 6
            212 <= n && n <= 214 -> 8
            else -> -1
        }
    )
}