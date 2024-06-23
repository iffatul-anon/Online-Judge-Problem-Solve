#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int x,y,z,k,a,b,xyz[3],xyz2[3],max=0;
        scanf("%lld %lld %lld %lld",&xyz[0],&xyz[1],&xyz[2],&k);
        sort(xyz,xyz+3);
        for(int i=1;i*i<=k;i++){
            if(k%i==0){
                a=k/i;
                for(int j=1;j*j<=a;j++){
                    if(a%j==0){
                        xyz2[0]=i;
                        xyz2[1]=j;
                        xyz2[2]=a/j;
                        sort(xyz2,xyz2+3);
                        if(xyz2[0]<=xyz[0] && xyz2[1]<=xyz[1] && xyz2[2]<=xyz[2]  && (xyz[0]-xyz2[0]+1)*(xyz[1]-xyz2[1]+1)*(xyz[2]-xyz2[2]+1)>max) max=(xyz[0]-xyz2[0]+1)*(xyz[1]-xyz2[1]+1)*(xyz[2]-xyz2[2]+1);
                    }
                }
            }
        }
        printf("%lld\n",max);
        
    }
}