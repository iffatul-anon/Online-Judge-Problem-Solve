import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        var n = scanner.nextInt()
        var c = 0
        var sum = 0
        val s1 = scanner.next()
        val s2 = scanner.next()
        for (i in 0 until n) {
            if (s1[i] == '*') c++
            else {
                if (c > 0) sum += c - 1
                c = 0
            }
        }
        if (c > 0) sum += c - 1
        c = 0
        for (i in 0 until n) {
            if (s2[i] == '*') c++
            else {
                if (c > 0) sum += c - 1
                c = 0
            }
        }
        if (c > 0) sum += c - 1
        println(sum)
    }
}
