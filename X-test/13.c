#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,z,c1=0,c2=0;
        long long sum=0,x=0,y=0,b,c,d,e;
        scanf("%d",&n);
        long long a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            if(a[i]>0) c1++;
            x+=a[i];
            if(a[i]>y){
                y=a[i];
                z=i;
                c2=c1;
            }
            if(a[i]==y && c1%2==1){
                z=i;
                c2=c1;
            }
            if(a[i]==0 || i==n-1){
                if(c1%2==0) sum+=(x*2);
                else if(c1==1) sum+=x;
                else if(c2%2==1 && c1>3) sum+=(x*2)-y;
                else{
                    b=a[z-1];
                    c=a[i-c1+1];
                    d=a[z+1];
                    if(i==n-1) e=a[i];
                    else e=a[i-1];
                    if(b>=c && b>=d && b>=e) sum+=(x*2)-b;
                    else if(c>=b && c>=d && c>=e) sum+=(x*2)-c;
                    else if(d>=b && d>=c && d>=e) sum+=(x*2)-d;
                    else if(e>=b && e>=c && e>=d) sum+=(x*2)-e;
                }
                c1=0;
                x=0;
                y=0;
            }
        }
        printf("%lld\n",sum);
    }
} 