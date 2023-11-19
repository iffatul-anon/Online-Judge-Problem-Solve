#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int max=0;
        map<int,int>a;
        for(int j=0;j<n;j++){
            cin>>x;
            a[x]++;
        }
        for(auto it:a ){
            if(max<it.second){
                max=it.second;
            }
        }
        printf("%d\n",n-max);
    }
    return 0;
}