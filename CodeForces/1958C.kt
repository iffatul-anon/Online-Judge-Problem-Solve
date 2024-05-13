import kotlin.math.pow

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (n, initialK) = readLine()!!.split(" ").map { it.toLong() }
        var k = initialK
        var x = 2.toDouble().pow(n.toInt()).toLong()
        var c = 0L
        while (x != k) {
            c++
            x /= 2
            if (x < k) k -= x
        }
        println(c)
    }
}
