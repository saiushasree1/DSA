#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++){
          cin>>a[i];
          ans^=a[i];
        }
        if(n%2==0){
          if(ans==0) cout<<ans<<endl;
          else cout<<-1<<endl;
        }
        else{
          cout<<ans<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1805/A
