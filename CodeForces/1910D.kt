import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()

    repeat(t) {
        var n = scanner.nextInt()
        var co = 0
        var x = 0

        val a = IntArray(n)
        val b = IntArray(n)
        val c = IntArray(n)
        val d = IntArray(n)
        val e = IntArray(n)
        val f = IntArray(n)

        for (i in 0 until n) {
            a[i] = scanner.nextInt()
            b[i] = a[i]
            c[i] = a[i]
            d[i] = a[i]
            e[i] = a[i]
            f[i] = a[i]
        }

        for (i in 1 until n) {
            if (b[i] == a[i - 1] || b[i] == b[i - 1]) b[i]++
        }

        for (i in 0 until n - 1) {
            if (b[i] >= b[i + 1]) {
                co++
                x = i
            }
        }

        if (co > 1) {
            println("NO")
        } else if (co == 0 || x == 0 || x == n - 2) {
            println("YES")
        } else {
            co = 0

            for (i in x until n - 1) {
                c[i] = c[i + 1]
                d[i] = d[i + 1]
            }

            for (i in 1 until n - 1) {
                if (d[i] == c[i - 1] || d[i] == d[i - 1]) d[i]++
            }

            for (i in 0 until n - 2) {
                if (d[i] >= d[i + 1]) {
                    co++
                }
            }

            if (co == 0) {
                println("YES")
            } else {
                co = 0

                for (i in x + 1 until n - 1) {
                    e[i] = e[i + 1]
                    f[i] = f[i + 1]
                }

                for (i in 1 until n - 1) {
                    if (f[i] == e[i - 1] || f[i] == f[i - 1]) f[i]++
                }

                for (i in 0 until n - 2) {
                    if (f[i] >= f[i + 1]) {
                        co++
                    }
                }

                if (co == 0) {
                    println("YES")
                } else {
                    println("NO")
                }
            }
        }
    }
}
