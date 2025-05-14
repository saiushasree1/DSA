#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int gc;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(i==0) gc=abs(a[i]-i-1);
          else gc=__gcd(gc,abs(a[i]-i-1));
        }
        cout<<gc<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1828/B
