fun main(args: Array<String>) {
    val (a, b) = readLine()!!.split(" ").map{ it.toInt() }
    var ans = 1
    for (i in 1 .. a-b) {
        ans *= 32
    }
    println(ans)
}
