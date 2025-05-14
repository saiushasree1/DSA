#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a==n && b==n) cout<<"Yes"<<endl;
        else if(a+b<=n-2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1761/A
