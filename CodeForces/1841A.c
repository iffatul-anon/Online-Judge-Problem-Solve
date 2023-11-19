#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n<=4) printf("Bob\n");
        else printf("Alice\n");
    }
}