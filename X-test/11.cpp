#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long l[n],r[n],ab[n],x=0,y=0,z=0,min=10000000000,max=0;
        for(int i=0;i<n;i++) scanf("%lld %lld",&l[i],&r[i]);
        for(int i=0;i<n;i++){
            ab[i]=z;
            x=llabs(z-l[i]);
            y=llabs(z-r[i]);
            if(x<y){
                min=x;
                z=l[i];
            }
            else{
                min=y;
                z=r[i];
            }
            if(min>max) {
                int a=
                if(ab[i]==l[i-1]){

                }
                else if(ab[i]==r[i-1]){
                    
                }
                x=llabs(l[i-1]-r[i-1]);
                y=min-max;
                if(x>=y) max=(min+max+1)/2;
                else max=(x+min+1)/2;
                
            }
        }
        printf("%d\n",max);
    }
}