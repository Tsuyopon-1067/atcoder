import kotlin.math.*
fun main(args: Array<String>) {
    val (a, b, t) = readLine()!!.split(" ").map{ it.toInt() }
    println((t/a) * b)
}
