#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){ 
          cin>>a[i];
          m[a[i]]++;
        }
        auto it=m.begin();
        int v1=it->second,v2;
        it++;
        if(it!=m.end()) v2=it->second;
        if(m.size()==1) cout<<"YES"<<endl;
        else if(m.size()==2 && abs(v1-v2)<=1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
https://codeforces.com/problemset/problem/1890/A
