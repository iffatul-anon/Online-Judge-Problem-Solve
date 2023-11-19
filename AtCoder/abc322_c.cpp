#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m],x=0;
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    sort(a,a+m);
    for(int i=1;i<=n;i++){
        if(i<=a[x]) printf("%d\n",a[x]-i);
        else{
            x++;
            printf("%d\n",a[x]-i);
        }
    }
}