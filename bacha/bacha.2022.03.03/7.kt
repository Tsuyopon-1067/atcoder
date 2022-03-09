fun main(args: Array<String>) {
    val s = readLine()!!
    var ans = 7
    for (c in s) if (c == 'o') ++ans
    println(ans*100)
}
