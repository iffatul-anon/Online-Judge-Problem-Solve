import java.util.*

fun main() {
    val scan = Scanner(System.`in`)
    val n = scan.nextInt()
    var x = 0
    var y = 0
    var f = 0

    val a = IntArray(n)
    val d = IntArray(n)
    val b = IntArray(200001) { 0 }
    val c = IntArray(200001) { 0 }

    repeat(n) {
        val aa = scan.nextInt()
        if (b[aa] == 0) {
            a[x]=aa
            x++
            b[aa] = 1
        } else if (c[aa] == 0) {
            d[y]=aa
            y++
            c[aa] = 1
        } else f = 1
    }
    a.sortDescending()
    d.sortDescending()
    if (f == 1) println("NO")
    else {
        println("YES")
        println(x)
        for (i in x-1 downTo 0) {
            print(a[i])
            print(" ")
        }
        println()
        println(y)
        for (i in 0 until y) {
            print(d[i])
            print(" ")
        }
        println()
    }
}
