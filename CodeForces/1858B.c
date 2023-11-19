#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,d,x,y,count=0,flag=0,flag2=0;
        scanf("%lld %lld %lld",&n,&m,&d);
        long long a[m],b[m+1];
        for(int i=0;i<m;i++) {
            scanf("%lld",&a[i]);
            if(i==0) b[i]=a[i];
            else b[i]=a[i]-a[i-1];
            if(i==m-1) b[m]=n-a[m-1];
        }
        count=m;
        if(b[0]>1 && (b[0]-1)%d!=0) count++;
        for(int i=0;i<=m;i++) {
            if(i==m) count+=b[i]/d;
            else count+=(b[i]-1)/d;
        }
        if(b[0]>1){
            x=b[0]-2;
            y=b[1]-1;
            if((x+y+1)/d==x/d+y/d) flag++;
            if((x+y+1)/d==x/d+y/d+1) flag2++;
        }
        for(int i=1;i<m;i++){
            x=b[i]-1;
            if(i==m-1) y=b[i+1];
            else y=b[i+1]-1;
            if((x+y+1)/d==x/d+y/d) flag++;
            if((x+y+1)/d==x/d+y/d+1) flag2++;
        }
        if(b[0]==1) flag2++;
        if(flag!=0) printf("%lld %lld\n",count-1,flag);
        else if(flag2!=0) printf("%lld %lld\n",count,flag2);
        else printf("%lld 0\n",count);
    }
}