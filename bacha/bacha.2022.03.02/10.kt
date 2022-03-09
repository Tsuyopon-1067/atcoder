import kotlin.math.*
fun main(args: Array<String>) {
    val (a, b, x) = readLine()!!.split(" ").map{ it.toInt() }
    if ((a <= x) and (x <= a+b)) println("YES")
    else println("NO")
}
