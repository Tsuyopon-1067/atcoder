fun main(args: Array<String>){
    val (a, b, c) = readLine()!!.split(" ").map{ it.toInt() }

    var mx = if (a > b) a else b
    mx = if (mx > c) mx else c
    var mi = if (a < b) a else b
    mi = if (mi < c) mi else c
    val md = a+b+c-mx-mi
    println(mx+md)
}