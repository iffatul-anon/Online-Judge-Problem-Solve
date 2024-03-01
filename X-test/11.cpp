#include<iostream>
#include<map>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
long long LCM(long long n1, long long n2){
    return (n1*n2)/GCD(n1,n2);
}
using namespace std;
int main(){
     
}