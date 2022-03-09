fun main(args: Array<String>){
    val p = readLine()!!.split(" ").map{ it.toInt() }
    for (c in p) {
        print('a' + c - 1)
    }
    println()
}