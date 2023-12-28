#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,s,k,x,y,z;
        scanf("%d %d %d",&n,&s,&k);
        int a[k];
        for(int i=0;i<k;i++) scanf("%d",&a[i]);
        sort(a,a+k);
        if(s>a[k-1] || s<a[0] || a[lower_bound(a,a+k,s)-a]!=s) printf("0\n");
        else{
            x=lower_bound(a,a+k,s)-a;
            y=a[k-1]-a[x]+1;
            z=a[x]-a[0]+1;
            for(int i=x;i<k;i++){
                if(i-x==a[i]-a[x]) continue;
                y=i-x;
                break;
            }
            for(int i=x;i>=0;i--){
                if(x-i==a[x]-a[i]) continue;
                z=x-i;
                break;
            }
            if((y<z && y+s<=n) || z>=s) printf("%d\n",y);
            else printf("%d\n",z);
        }
    }
}