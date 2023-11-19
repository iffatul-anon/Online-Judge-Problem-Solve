#include<iostream>
#include<map>
using namespace std;
int main(){
    long long int t,n,i,j,a,count,sum;
    cin>>t;
    for(i=0;i<t;i++){
        sum=0;
        cin>>n;
        map < int, int > mp;
        for(j=0;j<n;j++){
            cin>>a;
            mp[a]++;
        }
        for(auto it : mp){
            count = it.second;
            if(count>1){
                sum = sum + (count*(count-1))/2;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}