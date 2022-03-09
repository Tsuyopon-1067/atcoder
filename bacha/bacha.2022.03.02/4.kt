import kotlin.math.*
fun main(args: Array<String>) {
    val (d, t, s) = readLine()!!.split(" ").map{ it.toDouble() }
    if (d/s <= t) println("Yes")
    else println("No")
}
