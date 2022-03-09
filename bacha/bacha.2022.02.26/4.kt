fun main(args: Array<String>){
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map{ it.toInt() }
    val b = readLine()!!.split(" ").map{ it.toInt() }

    var ip = 0
    for (i in 0 .. n-1) {
        ip += a[i]*b[i]
    }
    println(
        if (ip == 0) "Yes"
        else "No"
    )
}