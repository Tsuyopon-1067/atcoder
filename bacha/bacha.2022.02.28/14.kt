fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val s = Array(n){""}
    val t = Array(n){""}
    for (i in 0 .. n-1) {
        val (st, tt) = readLine()!!.split(" ")
        s[i] = st
        t[i] = tt
    }

    var ans = false
    for (i in 0 .. n-1) for (j in i+1 .. n-1) {
        if ((s[i] == s[j]) and (t[i] == t[j])) ans = true
    }
    if (ans) println("Yes")
    else println("No")
}
