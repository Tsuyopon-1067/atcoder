import kotlin.math.*
fun main(args: Array<String>) {
    val n = readLine()!!.toLong()
    if ((-2.0.pow(31) <= n) and (n < 2.0.pow(31))) println("Yes")
    else println("No")
}
