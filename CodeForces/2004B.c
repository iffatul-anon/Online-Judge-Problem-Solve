#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int l1,r1,l2,r2,a[1000]={0},x=-1,y=-1,c=0;
        scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
        for(int i=l1;i<=r1;i++) a[i]++;
        for(int i=l2;i<=r2;i++) a[i]++;
        for(int i=0;i<1000;i++) {
            if(a[i]==2) {
                x=i;
                break;
            }
        }
        for(int i=0;i<1000;i++) {
            if(a[i]==2) {
                y=i;
            }
        }
        if(x==-1 || y==-1) printf("1\n");
        else{
            c=y-x;
            if(a[x-1]==1) c++;
            if(a[y+1]==1) c++;
            printf("%lld\n",c);
        }
        
    }
}