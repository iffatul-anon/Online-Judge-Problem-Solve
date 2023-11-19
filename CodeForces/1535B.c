#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],count=0,x=n-1;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            if(a[i]%2==0) {
                count=count+x--;
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(a[j]%2==0) continue;
                int gcd=a[i],y=2*a[j];
                while(gcd!=y){
                    if(gcd>y){
                        if(gcd%y==0) gcd=y;
                        else gcd=gcd%y;
                    }
                    else{
                        if(y%gcd==0) y=gcd;
                        else y=y%gcd;
                    }
                }
                if(gcd>1) count++;
            }
        }
        printf("%d\n",count);
    }
}