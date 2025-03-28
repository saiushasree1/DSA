#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mindif=INT_MAX;
        bool un=false;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(i!=0 && a[i-1]<=a[i]){
            mindif=min(mindif,a[i]-a[i-1]);
          }
          else if(i!=0)un=true;
        }
        if(un) cout<<0<<endl;
        else{
          if(mindif%2){
            cout<<(mindif+1)/2<<endl;
          }
          else{
            cout<<mindif/2 + 1<<endl;
          }
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1853/A
