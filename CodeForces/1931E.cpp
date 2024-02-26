#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,x,z,sum=0;
        scanf("%d %d",&n,&m);
        int c[n];
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            z=0;
            c[i]=0;
            while(x>0){
                if(x%10!=0) z=1;
                if(z==0) c[i]++;
                else sum++;
                x/=10;
            }
        }
        sort(c,c+n);
        for(int i=n-2;i>=0;i=i-2) sum+=c[i];
        if(sum>m) printf("Sasha\n");
        else printf("Anna\n");
    }
}