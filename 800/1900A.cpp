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
        int sublen=0;
        bool threesub=false;
        int dots=0;
        for(int i=0;i<n;i++){
          if(s[i]=='.'){
            dots++;
            sublen++;
            if(sublen>=3) threesub=true;
          }
          else sublen=0;
        }
        if(threesub) cout<<2<<endl;
        else cout<<dots<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1900/A
