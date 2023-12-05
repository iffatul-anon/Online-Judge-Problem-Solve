import java.util.Scanner
import java.util.TreeMap

fun main() {
    val scan = Scanner(System.`in`)
    val n = scan.nextInt()
    val k = scan.nextInt()
    val mp = TreeMap<Int, Int>()
    var x = n
    var y = 0
    var z = 0
    val a = IntArray(32)
    val b = IntArray(32) { 0 }
    a[0] = 1
    for (i in 1 until 32) a[i] = a[i - 1] * 2
    while (x > 0) {
        b[z] = x % 2
        x /= 2
        if (b[z] == 1) {
            y++
            mp[a[z]] = mp.getOrDefault(a[z], 0) + 1
        }
        z++
    }
    if (n < k || y > k) println("NO")
    else {
        while (y < k) {
            val last = mp.lastEntry()
            x = last.key
            mp[x] = mp[x]!! - 1
            if (mp[x] == 0) mp.remove(x)
            mp[x / 2] = mp.getOrDefault(x / 2, 0) + 2
            y++
        }
        println("YES")
        for ((key, value) in mp) {
            repeat(value) {
                print("$key ")
            }
        }
        println()
    }
}
