#include<stdio.h>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,gcd=0,x,y,z,f;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>gcd) gcd=a[i];
        }
        for(int i=0;i<n;i++){
            f=0;
            for(int j=0;j<n;j++){
                if(a[j]==-1) continue;
                if(f==0) {
                    x=GCD(gcd,a[j]);
                    f=1;
                }
                z=GCD(gcd,a[j]);
                if(z>=x){
                    x=z;
                    y=j;
                }
            }
            printf("%d ",a[y]);
            gcd=x;
            a[y]=-1;
        }
        printf("\n");
    }   
}