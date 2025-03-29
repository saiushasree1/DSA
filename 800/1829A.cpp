#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      int maxlen=0;
      int len=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
          len++;
        }
        else len=0;
        maxlen=max(maxlen,len);
      }
      cout<<maxlen<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1829/B
