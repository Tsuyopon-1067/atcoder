import kotlin.math.*
fun main(args: Array<String>) {
    val s = readLine()!!
    val t = readLine()!!
    var ans = 0
    for (i in 0 .. s.length-1) {
        if (s[i] == t[i]) {
            ++ans
        }
    }
    println(ans)
}
