fun main(args: Array<String>) {
    val s = readLine()!!
    var flag = arrayOf(true, true, true)
    val c = arrayOf('o', 'x', 'x')
    for (i in 0 .. s.length-1) {
        if (s[i] != c[i%3]) flag[0] = false
        if (s[i] != c[(i+1)%3]) flag[1] = false
        if (s[i] != c[(i+2)%3]) flag[2] = false
    }
    println(
    if (flag[0] or flag[1] or flag[2]) "Yes"
    else "No"
           )
}
