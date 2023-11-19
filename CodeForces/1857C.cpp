#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum,y;
        scanf("%d",&n);
        int x=(n*(n-1))/2;
        int a[n],b[x];
        y=n-1;
        sum=y;
        for(int i=0;i<x;i++) scanf("%d",&b[i]);
        sort(b,b+x);
        for(int i=0;i<n-1;i++){
            printf("%d ",b[sum-1]);
            y--;
            sum+=y;
        }
        printf("%d\n",b[x-1]);
    }
}