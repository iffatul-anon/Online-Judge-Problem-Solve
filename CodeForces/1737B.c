#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long l,r,ans;
        scanf("%lld %lld",&l,&r);
        long long sql=sqrtl(l),sqr=sqrtl(r);
        if (sql == sqr) {
            ans = 0;
            for (int i = 0; i < 3; i++) {
                if (l <= sql * (sql + i) && sql * (sql + i) <= r) ans++;
            }
        } 
        else {
            ans = (sqr - sql - 1) * 3;
            for (int i = 0; i < 3; i++) {
                if (l <= sql * (sql + i) && sql * (sql + i) <= r) ans++;
                if (l <= sqr * (sqr + i) && sqr * (sqr + i) <= r) ans++;
            }
        }
        printf("%llu\n",ans);
    }
}