#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,m,flag=0;
        scanf("%d %d",&n,&k);
        m=n-k;
        long long a[n],b[n],x,y;
        for(int i=0;i<k;i++){
            scanf("%lld",&x);
            b[i+m]=x;
            if(i==0) y=x;
            else a[i+m]=x-b[i+m-1];
        }
        for(int i=m+1;i<n-1;i++){
            if(a[i]>a[i+1]) {
                flag=1;
                break;
            }
        }
        x=y/(m+1);
        if(flag==1) printf("No\n");
        else if(y%(m+1)==0 && x<=a[m+1]) printf("Yes\n");
        else if(y%(m+1)!=0 && x+1<=a[m+1]) printf("Yes\n");
        else if(y<0 && y%(m+1)!=0 && x<=a[m+1]) printf("Yes\n");
        else printf("No\n");         
    }
}