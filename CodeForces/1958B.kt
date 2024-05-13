fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (k, m) = readLine()!!.split(" ").map { it.toInt() }
        val x = m / k
        val y = m % k
        if (x % 3 == 0) println(k - y + k)
        else if (x % 3 == 1) println(k - y)
        else println(0)
    }
}
