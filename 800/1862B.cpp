#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(i!=0 && a[i-1]>a[i]){
        v.push_back(1);
      }
      v.push_back(a[i]);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1862/B
