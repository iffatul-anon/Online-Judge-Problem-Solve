#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int r,c,f=0;
    cin>>r>>c;
    if((r%2==0 && r<=8 && c>=r && c<=15-r+1) || (c%2==0 && c<=8 && r>=c && r<=15-c+1)) cout<<"white"<<endl;
    else if((r%2==0 && c>(15-r) && c<15-(15-r)+1) || (c%2==0 && r>(15-c) && r<15-(15-c)+1)) cout<<"white"<<endl;
    else cout<<"black"<<endl;
}
