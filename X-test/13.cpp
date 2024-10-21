#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
signed main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,c=0;
        scanf("%d", &n);
        cin.ignore();
        map<string, string>mp;
        string ss;
        while(n--){
            cout<<"n-> "<<n<<endl;
            string s,s1,s2,s3;
            getline(cin, s);
            int i=0;
            for(i=0;i<s.size();i++){
                if(s[i]==' ') break;
                s1+=s[i];
            }
            if(s[i+1]==':'){
                for(i=i+4;i<s.size();i++) s2+=s[i];
                //cout<<s2<<endl;
                if(s2.size()==4 && s2=="haha"){
                    mp[s1]="1";
                }
                else if(s2.size()==5 && s2[0]=='h' && s2[1]=='a' && s2[2]=='h' && s2[3]=='a'){
                    mp[s1]="1";
                    mp[s1]+=s2[4];
                }
                else if(s2.size()==5 && s2[1]=='h' && s2[2]=='a' && s2[3]=='h' && s2[4]=='a'){
                    mp[s1]=s2[0];
                    mp[s1]+="1";
                }
                else mp[s1]=s2;
                cout<<"1->"<<s1<<" "<<mp[s1]<<endl;
            }
            else{
                for(i=i+3;i<s.size();i++) {
                    if(s[i]==' ') break;
                    s2+=s[i];
                }
                for(i=i+3;i<s.size();i++) s3+=s[i];
                cout<<"2-> "<<s2<<" "<<s3<<endl;
                s2=mp[s2];
                s3=mp[s3];
                //for(auto it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
                cout<<"3-> "<<s2<<" "<<s3<<endl;
                string tem1="",tem2="",tem3="",tem4="",tem5="",tem6="",tem7="",tem8="",tem9="";
                long long sum1=0,sum2=0,sum3=0;
                for(int i=0;i<s2.size();i++){
                    if(s2[i]>='0' && s2[i]<='9'){
                        for(int j=i;j<s2.size();j++){
                            if(s2[j]>'9'){
                                for(int k=j;k<s2.size();k++){
                                    tem3+=s2[k];
                                }
                                break;
                            }
                            tem2+=s2[j];
                        }
                        sum1=stoll(tem2);
                        break;
                    }
                    tem1+=s2[i];
                }
                for(int i=0;i<s3.size();i++){
                    if(s3[i]>='0' && s3[i]<='9'){
                        //cout<<s3[i]<<endl;
                        for(int j=i;j<s3.size();j++){
                            if(s3[j]>'9'){
                                for(int k=j;k<s3.size();k++){
                                    tem6+=s2[k];
                                }
                                break;
                            }
                            tem5+=s3[j];
                        }
                        //cout<<tem5<<endl;
                        sum2=stoll(tem5);
                        break;
                    }
                    tem4+=s3[i];
                }
                //cout<<tem1<<" | "<<tem2<<" | "<<tem3<<" | "<<tem4<<" | "<<tem5<<" | "<<tem6<<endl;
                sum3=sum1+sum2;
                //cout<<sum1<<" | "<<sum2<<" | "<<sum3<<endl;
                if(sum3==0){
                    tem7=tem1+tem4;
                    int f1=0;
                    if(tem7.size()>3){
                        for(int i=0;i<tem7.size()-3;i++) {
                            if(tem7[i]=='h' && tem7[i+1]=='a' && tem7[i+2]=='h' && tem7[i+3]=='a') {
                                sum3++;
                                f1=i+4;
                            }
                            if(f1==0){
                                tem8+=tem7[i];
                            }
                        }
                    }
                    for(int i=f1;i<tem7.size();i++) tem9+=tem7[i];
                    if(tem8.size()<4) mp[s1]=tem8;
                    else {
                        mp[s1]=tem8[0];
                        mp[s1]+=tem8[1];
                        mp[s1]+=tem8[2];
                    }
                    mp[s1]+=to_string(sum3);
                    if(tem9.size()<4) mp[s1]+=tem9;
                    else {
                        mp[s1]=tem9[tem9.size()-3];
                        mp[s1]+=tem9[tem9.size()-2];
                        mp[s1]+=tem9[tem9.size()-1];
                    }
                    mp[s1]+=tem9;
                    //cout<<tem8<<" | "<<tem9<<endl;
                }
                else if(sum1==0){
                    tem7=tem1+tem4;
                    int f1=0;
                    if(tem7.size()>3){
                        for(int i=0;i<tem7.size()-3;i++) {
                            if(tem7[i]=='h' && tem7[i+1]=='a' && tem7[i+2]=='h' && tem7[i+3]=='a') {
                                sum3++;
                                f1=i+4;
                            }
                            if(f1==0){
                                tem8+=tem7[i];
                            }
                        }
                    }
                    if(tem8.size()<4) mp[s1]=tem8;
                    else {
                        mp[s1]=tem8[0];
                        mp[s1]+=tem8[1];
                        mp[s1]+=tem8[2];
                    }
                    mp[s1]+=to_string(sum3);
                    mp[s1]+=tem6;
                    //cout<<tem8<<" | "<<tem6<<endl;
                }
                else if(sum2==0){
                    tem7=tem3+tem4;
                    int f1=0;
                    if(tem7.size()>3){
                        for(int i=0;i<tem7.size()-3;i++) {
                            if(tem7[i]=='h' && tem7[i+1]=='a' && tem7[i+2]=='h' && tem7[i+3]=='a') {
                                sum3++;
                                f1=i+4;
                            }
                            if(f1==0){
                                tem8+=tem7[i];
                            }
                        }
                    }
                    mp[s1]+=tem1;
                    mp[s1]+=to_string(sum3);
                    if(tem8.size()<4) mp[s1]+=tem8;
                    else {
                        mp[s1]=tem8[tem8.size()-3];
                        mp[s1]+=tem8[tem8.size()-2];
                        mp[s1]+=tem8[tem8.size()-1];
                    }
                    //cout<<tem8<<" | "<<tem6<<endl;
                }
                else{
                    tem7=tem3+tem4;
                    if(tem7.size()>3){
                    for(int i=0;i<tem7.size()-3;i++) {
                        if(tem7[i]=='h' && tem7[i+1]=='a' && tem7[i+2]=='h' && tem7[i+3]=='a') {
                            sum3++;
                        }
                    }
                    }
                    mp[s1]=tem1;
                    mp[s1]+=to_string(sum3);
                    mp[s1]+=tem6;
                    //cout<<tem1<<" | "<<tem6<<endl;
                }
            }
            ss=mp[s1];
            cout<<ss<<endl;
        }
        string tem1="",tem2="",tem3="";
        long long sum=0;
        for(int i=0;i<ss.size();i++){
            if(ss[i]>='0' && ss[i]<='9'){
                for(int j=i;j<ss.size();j++){
                    if(ss[j]>'9'){
                        for(int k=j;k<ss.size();k++){
                            tem3+=ss[k];
                        }
                        break;
                    }
                    tem2+=ss[j];
                }
                sum=stoll(tem2);
                break;
            }
            tem1+=ss[i];
        }
        if(sum==0){
            for(int i=0;i<tem1.size()-3;i++) {
                if(tem1[i]=='h' && tem1[i+1]=='a' && tem1[i+2]=='h' && tem1[i+3]=='a') {
                    sum++;
                }
            }
        }
        cout<<"ans "<<sum<<endl;
    }
}
