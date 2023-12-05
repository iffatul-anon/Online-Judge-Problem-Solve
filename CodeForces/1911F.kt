import java.util.Scanner
import java.util.TreeMap

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val mp = TreeMap<Int, Int>()
    repeat(n) {
        val a = scanner.nextInt()
        mp[a] = mp.getOrDefault(a, 0) + 1
    }
    val reversedEntries = mp.entries.reversed()
    for (entry in reversedEntries) {
        val x = entry.key
        val y = x + 1
        val z = x - 1
        val a = entry.value
        if (a > 2) {
            mp[y] = mp.getOrDefault(y, 0) + 1
            if (z > 0) mp[z] = mp.getOrDefault(z, 0) + 1
        } else if (a == 2) {
            if (mp[y] == null) mp[y] = 1
            else if (z > 0) mp[z] = mp.getOrDefault(z, 0) + 1
        } else if (a == 1) {
            if (mp[y] == null) {
                mp[y] = 1
                mp.remove(x);
            }
        }
    }
    println(mp.size)
}
