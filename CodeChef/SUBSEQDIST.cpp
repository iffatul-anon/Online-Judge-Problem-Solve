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
        for(auto it:a){
            if(max<it.second){
                max=it.second;
            }
        }
        max=max;
        int count=0;
        while(max!=1){
            if(max%2!=0){
                max=max+1;
            }
            max=max/2;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}