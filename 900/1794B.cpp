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
          a[i]+=1;
          if(i!=0 && a[i]%a[i-1]==0){
            a[i]+=1;
          }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1794/B
