#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        int a;
        bool t=false;
        for(int i=0;i<n;i++){
            cin>>a;
            t=t|(a==k);
        }
        if(t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1878/A
