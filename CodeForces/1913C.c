#include<stdio.h>
#include<math.h>
int main(){
    int m;
    scanf("%d",&m);
    long long mp[30]={0};
    while(m--){
        long long t,v,x,y;
        scanf("%lld %lld",&t,&v);
        if(t==1) mp[v]++;
        else{
            for(int i=29;i>=0;i--){
                x=pow(2,i);
                y=v/x;
                v=v%x;
                if(mp[i]<y) {
                    y=y-mp[i];
                    v+=y*pow(2,i);
                }
            }
            if(v==0) printf("YES\n");
            else printf("NO\n");
        }
    }
}