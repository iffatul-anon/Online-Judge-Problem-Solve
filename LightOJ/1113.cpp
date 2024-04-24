#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        printf("Case %d:\n",i);
        int x=0;
        vector<string>v1,v2;
        v2.push_back("http://www.lightoj.com/");
        string s,ss;
        while(1){
            cin>>ss;
            if(ss=="VISIT"){
                cin>>s;
                if(v2.size()==0) printf("Ignored\n");
                else{
                    v1.push_back(v2.back());
                    v2.clear();
                }
                v2.push_back(s);
                cout<<v2.back()<<'\n';
            }
            else if(ss=="BACK"){
                if(v1.size()==0) printf("Ignored\n");
                else {
                    v2.push_back(v1.back());
                    v1.pop_back();
                    cout<<v2.back()<<'\n';
                }
            }
            else if(ss=="FORWARD"){
                if(v2.size()<2) printf("Ignored\n");
                else {
                    v1.push_back(v2.back());
                    v2.pop_back();
                    cout<<v2.back()<<'\n';
                }
            }
            else break;
        }
    }
}
