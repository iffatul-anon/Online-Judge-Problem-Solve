#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <stdio.h>
int t, n, i, j;
float ans;
float a[200010],b[200010];
int main(){
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        for (i = 0; i < n; i++) scanf("%f", &a[i]);
        for (i = 0; i < n; i++) scanf("%f", &b[i]);
        ans = 0;
        for (i = 1; i < n; i++){
            for (j = 0; j < i; j++){
                if(a[i]*a[j]-b[i]==b[j]) ans++;
            }
        }
        printf("%lld\n",(long long) ans);
    }
}