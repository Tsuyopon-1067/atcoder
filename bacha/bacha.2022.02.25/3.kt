fun main() {
    var b: String = readLine()!!
    var acgt = "ACGT"
    var tgca = "TGCA"
    for (i in 0 .. 3) {
        if (b[0] == acgt[i]) println(tgca[i])
    }
}