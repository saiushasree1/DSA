#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int c=0;
        int l=-1;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==0){
            if(i-l>1) c++;
            l=i;
          }
        }
        if(l!=n-1) c++;
        cout<<min(2,c)<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1696/B
