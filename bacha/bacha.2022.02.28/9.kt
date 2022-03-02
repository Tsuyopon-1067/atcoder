fun main(args: Array<String>) {
    val (h, n) = readLine()!!.split(" ").map{ it.toInt() }
    val a = readLine()!!.split(" ").map{ it.toInt() }
    var sum = 0
    for (i in 0 .. n-1) {
        sum += a[i]
    }
    if (sum >= h) println("Yes")
    else println("No")
}
