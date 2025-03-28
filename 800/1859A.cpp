#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int g=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==g) c++;
          g=max(g,a[i]);
        }
        if(c==n-1)cout<<-1<<endl;
        else{
          vector<int> b,c;
          for(int i=0;i<n;i++){
            if(a[i]!=g){
              b.push_back(a[i]);
            }
            else c.push_back(a[i]);
          }
          cout<<b.size()<<" "<<c.size()<<endl;
          for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
          cout<<endl;
          for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
          cout<<endl;
        }
        
    }
    return 0;
}
https://codeforces.com/problemset/problem/1859/A
