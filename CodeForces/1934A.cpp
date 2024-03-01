#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        sum=abs(a[0]-a[n-1])+abs(a[n-1]-a[1])+abs(a[1]-a[n-2])+abs(a[n-2]-a[0]);
        printf("%d\n",sum);
    }
}