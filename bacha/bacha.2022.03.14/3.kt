import kotlin.math.*
fun main() {
    val n = readLine()!!.toInt()
    var ans = 2000000000
    for (i in 1 .. n) {
        val (a, p, x) = readLine()!!.split(" ").map{ it.toInt() }
        if (x - a > 0) ans = min(ans, p)
    }
    println(
        if (ans == 2000000000) -1
        else ans
           )
}
