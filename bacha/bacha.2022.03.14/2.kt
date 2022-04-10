fun main() {
    val (h, n) = readLine()!!.split(" ").map{ it.toInt() }
    val a = readLine()!!.split(" ").map{ it.toInt() }  
    var sum = 0
    for (t in a) sum += t
    println(
        if (sum >= h) "Yes"
        else "No"
           )
}
