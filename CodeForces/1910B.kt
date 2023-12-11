import java.util.Scanner

fun main() {
    val scan = Scanner(System.`in`)
    val t = scan.nextInt()

    repeat(t) {
        val s = scan.next()
        val l = s.length
        var x = 0
        var y = 0
        var c = 0
        var z = 0
        var zz = 0
        for (i in 0 until l) {
            if (s[i] == '+') x++
            else y++
            if (y > x) c++
        }
        if (c == 0) println("1 1")
        else {
            for (i in 0 until l) {
                if (s[i] == '-') {
                    z = i
                    break
                }
            }
            for (i in l - 1 downTo 0) {
                if (s[i] == '+') {
                    zz = i
                    break
                }
            }
            val temp = s.toCharArray()
            temp[z] = s[zz]
            temp[zz] = s[z]
            val modifiedS = String(temp)
            x = 0
            y = 0
            c = 0
            for (i in 0 until l) {
                if (modifiedS[i] == '+') x++
                else y++
                if (y > x) c++
            }
            if (c == 0) println("${z + 1} ${zz + 1}")
            else println("-1")
        }
    }
}
