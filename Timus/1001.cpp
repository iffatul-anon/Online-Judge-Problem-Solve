#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long int n;
    vector<long long int>a;
    while(EOF!=scanf("%lld",&n)){
        a.push_back(n);
    }
    long long int l=a.size();
    for(int i=l-1;i>=0;i--){
        printf("%.4Lf\n",sqrtl(a[i]));
    }
}
