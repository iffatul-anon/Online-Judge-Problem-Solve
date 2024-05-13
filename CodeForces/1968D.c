#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,pb,ps,pb2,ps2,i,b=0,s=0,xxx=0,yyy=0;
        scanf("%lld %lld %lld %lld",&n,&k,&pb,&ps);
        pb2=pb;
        ps2=ps;
        long long p[n+1],a[n+1],x[n+1],y[n+1],xx[n+1],yy[n+1],xx2[n+1],yy2[n+1];
        xx2[0]=yy2[0]=0;
        for(i=1;i<=n;i++) scanf("%lld",&p[i]);
        for(i=1;i<=n;i++) {
            scanf("%lld",&a[i]);
            x[i]=y[i]=0;
        }
        for(i=1;i<=k && i<=n;i++){
            if(x[i]) {
                xxx=i;
                break;
            }
            x[i]=1;
            xx[i]=a[pb2];
            xx2[i]=xx2[i-1]+xx[i];
            pb2=p[pb2];
        }
        if(xxx==0) xxx=i;
        for(i=1;i<=k && i<=n;i++){
            if(y[i]) {
                yyy=i;
                break;
            }
            y[i]=1;
            yy[i]=a[ps2];
            yy2[i]=yy2[i-1]+yy[i];
            ps2=p[ps2];
        }
        if(yyy==0) yyy=i;
        for(i=1;i<xxx;i++){
            if((xx2[i]+(xx[i]*(k-i)))>b) b=(xx2[i]+(xx[i]*(k-i)));
        }
        for(i=1;i<yyy;i++){
            if((yy2[i]+(yy[i]*(k-i)))>s) s=(yy2[i]+(yy[i]*(k-i)));
        }
        if(b>s) printf("Bodya\n");
        else if(b<s) printf("Sasha\n");
        else printf("Draw\n");
    }
}