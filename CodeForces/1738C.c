#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,e=0,o=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            if(x%2==0) e++;
            else o++;
        }
        if(((o+1)/2)%2==0 || (e%2==1 && o%2==1 && (o/2)%2==0)) printf("Alice\n");
        else printf("Bob\n");
    }
}