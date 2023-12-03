import java.util.*

fun main() {
    val scan = Scanner(System.`in`)
    val t = scan.nextInt()
    repeat(t) {
        val n = scan.nextInt()
        val a = IntArray(n)
        for (i in 0 until n) a[i] = scan.nextInt()
        var x = 0
        if (a[0] != a[n - 1] && a[0] == a[1]) x = n
        else if (a[0] != a[n - 1] && a[1] == a[n - 1]) x = 1
        else {
            for (i in 1 until n - 1) {
                if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
                    x = i + 1
                    break
                }
            }
        }
        println(x)
    }
}