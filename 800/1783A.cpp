#include <iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        unordered_set<int> m;
        for(int i=0;i<n;i++){
          cin>>a[i];
          m.insert(a[i]);
        }
        if(m.size()==1) cout<<"No"<<endl;
        else{
          sort(a.begin(),a.end(),greater<int>());
          if(a[0]==a[1]){
          int v=a[0];
          for(int i=2;i<n;i++){
            if(a[i]!=v){
              a[1]=a[i];
              a[i]=v;
              break;
            }
          }
          }
          cout<<"Yes"<<endl;
          for(int i=0;i<n;i++) cout<<a[i]<<" ";
          cout<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1783/A
