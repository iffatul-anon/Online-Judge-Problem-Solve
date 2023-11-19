#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,a[10],y=0,count=0,countp=0,countn=0,flag=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            if(x<0 && countn++<3 || x>0 && countp++<3 || x==0 && count++<5) a[y++]=x;
        }
        for(int i=0;i<y;i++){
            for(int j=i+1;j<y;j++){
                for(int k=j+1;k<y;k++){
                    int ok=0;
                    for(int z=0;z<y;z++){
                        if(a[z]==a[i]+a[j]+a[k]) ok=1;
                    }
                    if(ok==0) flag=1;
                }
            }
        }
        if(countp>2 || countn>2 || y<3) printf("NO\n");
        else if(flag==0) printf("YES\n");
        else printf("NO\n");
    }
}