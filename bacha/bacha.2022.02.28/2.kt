import kotlin.math.*
fun digit(nn: Int) : Int {
    var n = nn
    var res = 0
    while (n > 0) {
        res += n%10
        n /= 10
    }
    return res
}
fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toInt() }
    println(max(digit(a), digit(b)))
}
