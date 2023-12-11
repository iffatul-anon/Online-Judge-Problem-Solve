import java.util.Scanner

fun main() {
    val scan = Scanner(System.`in`)
    val t = scan.nextInt()

    for (j in 0 until t) {
        var s = scan.next()
        val l = s.length
        for (i in l - 1 downTo 0) {
            if (s[i] > '0') {
                s = s.substring(0, i)
                break
            }
        }
        println(s)
    }
}
