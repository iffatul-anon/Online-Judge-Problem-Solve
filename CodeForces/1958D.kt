import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    var t = scanner.nextInt()
    while (t-- > 0) {
        var c = 0
        var sum: Long = 0
        var x: Long = 0
        var y: Long = 0
        val n = scanner.nextInt()
        val a = LongArray(n)
        for (i in 0 until n) a[i] = scanner.nextLong()
        for (i in 0 until n) {
            x += a[i]
            if (a[i] > 0) c++
            if (c % 2 == 1 && a[i] > y) y = a[i]
            if (a[i] == 0L || i == n - 1) {
                if (c % 2 == 0) sum += x * 2
                else sum += (x * 2) - y
                c = 0
                x = 0
                y = 0
            }
        }
        println(sum)
    }
}
