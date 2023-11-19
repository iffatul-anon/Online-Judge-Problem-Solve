#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,min=1000000000;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=j;j<m;j++){
            if(a[i]<b[j]){
                if(min>abs(a[i]-b[j])) min=abs(a[i]-b[j]);
                break;
            }
            if(min>abs(a[i]-b[j])) min=abs(a[i]-b[j]);
        }
    }
    printf("%d\n",min);
}