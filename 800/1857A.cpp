#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
          cin>>a[i];
          sum+=a[i];
        }
        if(sum%2) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1857/A
