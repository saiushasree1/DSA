#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=s.length()-1;
        while(i<j){
          if(s[i]!=s[j]){
            i++;
            j--;
          }
          else break;
        }
        if(i>j) cout<<0<<endl;
        else cout<<1+(j-i)<<endl;
  
    }
    return 0;
}
https://codeforces.com/problemset/problem/1791/C
