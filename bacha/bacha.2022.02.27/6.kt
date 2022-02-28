fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    var sav = 0
    var k = 1
    while (sav < n) {
        sav += k
        ++k
    }
    println(k-1)
}
