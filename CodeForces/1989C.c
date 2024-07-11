#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x=0,y=0,c1=0,c2=0,z;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++) scanf("%lld",&b[i]);
        for(int i=0;i<n;i++){
            if(a[i]!=1 && b[i]==1) y++;
            else if(a[i]==1 && b[i]!=1) x++;
            else if(a[i]==1 && b[i]==1) c1++;
            else if(a[i]==-1 && b[i]==-1) c2++;
        }
        if(x<y) {
            int tem=x;
            x=y;
            y=tem;
        }
        z=x-y;
        if(c1<=z) y+=c1;
        else{
            c1-=z;
            x+=c1/2;
            y=x;
            if(c1%2==1) x++;
        }
        z=x-y;
        if(c2<=z) x-=c2;
        else{
            c2-=z;
            y-=c2/2;
            x=y;
            if(c2%2==1) y--;
        }
        if(x<y) printf("%lld\n",x);
        else printf("%lld\n",y);
    }
}
