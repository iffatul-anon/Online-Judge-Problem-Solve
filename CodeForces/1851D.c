#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x=0,y=0,z=0,xx=0,count1=0,count2=0,count3=0,flag=0;
        scanf("%lld",&n);
        long long a[n],b[n],c[n+1];
        a[0]=0;
        b[0]=0;
        for(int i=0;i<=n;i++) c[i]=0;
        for(int i=1;i<n;i++) {
            scanf("%lld",&a[i]);
            b[i]=a[i]-a[i-1];
            if(b[i]>n){
                x=b[i];
                count1++;
            }
            else c[b[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(c[i]==0) count3++;
            if(c[i]==0 && y==0) y=i;
            else if(c[i]==0 && y!=0) z=i;
            if(c[i]==2) {
                xx=i;
                count2++;
            }
            if(c[i]>2) flag=1;
        }
        if(flag==1 || count3>2 || count1+count2>1) printf("NO\n");
        else if(x==0 && z==0 && xx==0 && y>0) printf("YES\n");
        else if(x==0 && xx>0 && y>0 && z>0 && (y+z)==xx) printf("YES\n");
        else if(xx==0 && x>0 && y>0 && z>0 && (y+z)==x) printf("YES\n");
        else printf("NO\n");
    }
}