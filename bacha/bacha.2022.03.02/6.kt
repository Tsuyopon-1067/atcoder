fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    var ac = 0
    var wa = 0
    var tle = 0
    var re = 0
    for (i in 1 .. n) {
        val s = readLine()!!
        when (s) {
            "AC" -> ++ac
            "WA" -> ++wa
            "TLE" -> ++tle
            "RE" -> ++re
        }
    }
    println(String.format("AC x %d", ac))
    println(String.format("WA x %d", wa))
    println(String.format("TLE x %d", tle))
    println(String.format("RE x %d", re))
}