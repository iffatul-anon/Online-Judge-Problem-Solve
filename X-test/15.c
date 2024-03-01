#include<stdio.h>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    }   
}