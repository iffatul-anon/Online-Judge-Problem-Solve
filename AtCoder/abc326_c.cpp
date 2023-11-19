#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,x,j=0,max=0;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    x=a[0];
    for(int i=0;i<n;i++){
        if(a[i]-x>=m){
            for(j=j;j<i;j++){
                x=a[j];
                if(a[i]-x<m) break;
            }
        }
        if(i-j+1>max) max=i-j+1;
    }
    printf("%d\n",max);
}