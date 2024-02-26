#include <stdio.h>
int a, b, c, d, e, f,anon[10001];
int fn(int n) {
    if(anon[n]!=-1) return anon[n];
    return anon[n]=(fn(n-1)%10000007 + fn(n-2)%10000007 + fn(n-3)%10000007 + fn(n-4)%10000007 + fn(n-5)%10000007 + fn(n-6)%10000007)%10000007;
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0;i<=n;i++) anon[i]=-1;
        anon[0]=a%10000007;
        anon[1]=b%10000007;
        anon[2]=c%10000007;
        anon[3]=d%10000007;
        anon[4]=e%10000007;
        anon[5]=f%10000007;
        fn(n);
        printf("Case %d: %d\n", caseno, anon[n]);
    }
    return 0;
}