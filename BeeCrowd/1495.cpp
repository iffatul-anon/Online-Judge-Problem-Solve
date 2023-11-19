#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,g;
    while(EOF!=scanf("%d %d",&n,&g)){
        int a[n];
        for(int i=0;i<n;i++){
            int s,r;
            scanf("%d %d",&s,&r);
            a[i]=r-s;
        }
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                count=count+3;
            }
            else if(a[i]==0 && g>0){
                g--;
                count=count+3;
            }
            else if(a[i]==0){
                count++;
            }
            else if(g>a[i] && g!=0){
                g=g-a[i]-1;
                count=count+3;
            }
            else if(g==a[i] && g!=0){
                g=g-a[i];
                count++;
            }
            else{
                break;
            }
        }
        printf("%d\n",count);
    }
}