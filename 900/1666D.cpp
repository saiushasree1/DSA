#include <iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
      string s,d;
      cin>>s;
      cin>>d;
      if(s==d) cout<<"YES"<<endl;
      else{
        int n=s.length(),m=d.length();
        if(n==m) cout<<"NO"<<endl;
        else{
          bool si=true;
          vector<int> v(26,0);
          for(int i=0;i<m;i++){
            v[d[i]-'A']++;
          }
          int i=n-1,j=m-1;
          while(i>=0 && j>=0){
            if(s[i]==d[j]){
              v[s[i]-'A']--;
              i--;j--;
              
            }
            else{
              if(v[s[i]-'A']>0){
                si=false;
                break;
              }
              i--;
            }
          }
          if(si && j==-1) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
        }
      }
    }
    return 0;
}

https://codeforces.com/problemset/problem/1666/D
