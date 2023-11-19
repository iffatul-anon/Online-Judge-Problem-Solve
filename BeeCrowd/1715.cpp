#include<iostream>
using namespace std;
int main(){
    int n,m,g;
    while(cin>>n>>m){
        int count=0;
        for(int i=1;i<=n;i++){
            int flag=0;
            for(int j=1;j<=m;j++){
                cin>>g;
                if(g==0){
                    flag=1;
                }
            }
            if(flag==0){
                count++;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}