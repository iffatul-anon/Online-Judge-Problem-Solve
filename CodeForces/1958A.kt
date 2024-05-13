fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val n = readLine()!!.toInt()
        if (n % 3 == 2 && n / 3 == 0) println(2)
        else if (n % 3 == 1 && n / 3 < 3) println(1)
        else  println(0)
    }
}