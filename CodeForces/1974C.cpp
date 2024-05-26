#include<iostream>
#include<algorithm>
#include<map>
#include <utility>
#include<vector>
using namespace std;

bool comparePairs(const pair<pair<int, int>, int> &p1, const pair<pair<int, int>, int> &p2) {
    if (p1.first.first != p2.first.first)
        return p1.first.first < p2.first.first;
    if (p1.first.second != p2.first.second)
        return p1.first.second < p2.first.second;
    return p1.second < p2.second;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long anon=0,sum=0;
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        map<int,int>mp1;
        map<int,int>:: iterator it10;
        vector<pair<pair<int,int>,int> > v1,v2,v3;
        for(int i=0;i<n-2;i++){
            v1.push_back(make_pair(make_pair(a[i],a[i+1]),a[i+2]));
            v2.push_back(make_pair(make_pair(a[i+1],a[i+2]),a[i]));
            v3.push_back(make_pair(make_pair(a[i],a[i+2]),a[i+1]));
        }

        sort(v1.begin(), v1.end(), comparePairs);
        sort(v2.begin(), v2.end(), comparePairs);
        sort(v3.begin(), v3.end(), comparePairs);

        for (vector<pair<pair<int, int>, int> >::const_iterator it = v1.begin(); it != v1.end(); ++it) {
            const pair<pair<int,int>,int > & p = *it;
            if(it==v1.begin()) mp1[p.second]++;
            else {
                it--;
                const pair<pair<int,int>,int > & p2 = *it;
                it++;
                if(p.first.first==p2.first.first && p.first.second==p2.first.second){
                    mp1[p.second]++;
                }
                else{
                    sum=0;
                    it10 = mp1.begin();
                    while(it10!=mp1.end()){
                        sum+=it10->second;
                        it10++;
                    }
                    it10=mp1.begin();
                    while(it10!=mp1.end()){
                        sum-=it10->second;
                        anon+=(it10->second*sum);
                        it10++;
                    }
                    mp1.clear();
                    mp1[p.second]++;
                }
            }
        }
        sum=0;
        it10=mp1.begin();
        while(it10!=mp1.end()){
            sum+=it10->second;
            it10++;
        }
        it10=mp1.begin();
        while(it10!=mp1.end()){
            sum-=it10->second;
            anon+=(it10->second*sum);
            it10++;
        }
        mp1.clear();
        for (vector<pair<pair<int, int>, int> >::const_iterator it = v2.begin(); it != v2.end(); ++it) {
            const pair<pair<int,int>,int > & p = *it;
            if(it==v2.begin()) mp1[p.second]++;
            else {
                it--;
                const pair<pair<int,int>,int > & p2 = *it;
                it++;
                if(p.first.first==p2.first.first && p.first.second==p2.first.second){
                    mp1[p.second]++;
                }
                else{
                    sum=0;
                    it10 = mp1.begin();
                    while(it10!=mp1.end()){
                        sum+=it10->second;
                        it10++;
                    }
                    it10=mp1.begin();
                    while(it10!=mp1.end()){
                        sum-=it10->second;
                        anon+=(it10->second*sum);
                        it10++;
                    }
                    mp1.clear();
                    mp1[p.second]++;
                }
            }
        }
        sum=0;
        it10=mp1.begin();
        while(it10!=mp1.end()){
            sum+=it10->second;
            it10++;
        }
        it10=mp1.begin();
        while(it10!=mp1.end()){
            sum-=it10->second;
            anon+=(it10->second*sum);
            it10++;
        }
        mp1.clear();
        for (vector<pair<pair<int, int>, int> >::const_iterator it = v3.begin(); it != v3.end(); ++it) {
            const pair<pair<int,int>,int > & p = *it;
            if(it==v3.begin()) mp1[p.second]++;
            else {
                it--;
                const pair<pair<int,int>,int > & p2 = *it;
                it++;
                if(p.first.first==p2.first.first && p.first.second==p2.first.second){
                    mp1[p.second]++;
                }
                else{
                    sum=0;
                    it10 = mp1.begin();
                    while(it10!=mp1.end()){
                        sum+=it10->second;
                        it10++;
                    }
                    it10=mp1.begin();
                    while(it10!=mp1.end()){
                        sum-=it10->second;
                        anon+=(it10->second*sum);
                        it10++;
                    }
                    mp1.clear();
                    mp1[p.second]++;
                }
            }
        }
        sum=0;
        it10=mp1.begin();
        while(it10!=mp1.end()){
            sum+=it10->second;
            it10++;
        }
        it10=mp1.begin();
        while(it10!=mp1.end()){
            sum-=it10->second;
            anon+=(it10->second*sum);
            it10++;
        }
        mp1.clear();
        printf("%lld\n",anon);
    }
} 