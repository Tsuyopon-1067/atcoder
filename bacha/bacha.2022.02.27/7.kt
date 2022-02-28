import kotlin.math.*  
fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    var ans = 99999
    for (i in 1 .. n-1) {
        ans = min(ans, count(i) + count(n-i))
    }
    println(ans)
}
fun count(nn: Int): Int {
    var res = 0
    var n = nn
    while (n > 0) {
        res += n % 10
        n /= 10
    }
    return res
}
