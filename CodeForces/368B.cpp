#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,m,l;
    scanf("%d %d",&n,&m);
    int a[n];
    map < int, int > anon;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=0;i--){
        anon[a[i]]++;
        a[i]=anon.size();
    }
    for(int i=0;i<m;i++){
        scanf("%d",&l);
        printf("%d\n",a[l-1]);
    }
}