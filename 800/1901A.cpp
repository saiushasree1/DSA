#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int past=0;
        int mini=0;
        for(int i=0;i<n;i++){
          cin>>a[i];
          mini=max(mini,a[i]-past);
          past=a[i];
        }
        mini=max(mini,2*(k-past));
        cout<<mini<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1901/A
