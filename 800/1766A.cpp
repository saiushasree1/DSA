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
        int res=0;
        int z=n;
        while(z>0){
          int x=z/10;
          if(x!=0) res+=9;
          else res+=z;
          z=x;
        }
        cout<<res<<endl;
    }
    return 0;
}

https://codeforces.com/problemset/problem/1766/A
