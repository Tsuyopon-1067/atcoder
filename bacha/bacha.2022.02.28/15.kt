fun main(args: Array<String>) {
    val (n, k) = readLine()!!.split(" ").map{ it.toInt() }
    var ans = 1
    var kk = 1
    while (n >= kk) {
        ++ans
        kk *= k
    }
    println(ans-1)
}
