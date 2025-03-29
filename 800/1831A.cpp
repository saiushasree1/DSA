#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=n+1-a[i];
      }
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
      cout<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1831/A
