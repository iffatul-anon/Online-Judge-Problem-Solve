import java.util.Scanner

fun main() {
    val scan = Scanner(System.`in`)
    val n = scan.nextInt()
    val a = IntArray(101)
    for (i in 0 until n) {
        val x = scan.nextInt()
        a[x]++
        if (a[x] == 2) a[x] = 0
    }
    var c = 0
    var f = 0
    for (i in 100 downTo 0) {
        if (a[i] == 1 && f == 0) f = i
        else if (a[i] == 1 && f != 0) {
            c += f - i
            f = 0
        }
    }
    println(c)
}
