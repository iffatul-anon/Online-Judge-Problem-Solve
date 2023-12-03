import java.util.*

fun main() {
    val scan = Scanner(System.`in`)
    val n = scan.nextInt()
    val s = scan.next()
    print("${s[0]}")
    if (n > 1) print("${s[1]}")
    if (n > 3) print("${s[3]}")
    if (n > 6) print("${s[6]}")
    if (n > 10) print("${s[10]}")
    if (n > 15) print("${s[15]}")
    if (n > 21) print("${s[21]}")
    if (n > 28) print("${s[28]}")
    if (n > 36) print("${s[36]}")
    if (n > 45) print("${s[45]}")
}
