
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,h,w;
    cin>>h>>w>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int f=0,c=0;
    int arr[h][w];
    for(int i=0;i<h;i++){
        if(i%2==0){
            for(int j=0;j<w;j++){
                arr[i][j]=c+1;
                a[c]--;
                if(a[c]==0) c++;
            }
        }
        else{
            for(int j=w-1;j>=0;j--){
                arr[i][j]=c+1;
                a[c]--;
                if(a[c]==0) c++;
            }
        }

    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
