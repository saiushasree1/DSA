#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int el=INT_MAX,a;
    for(int i=0;i<n;i++){
      cin>>a;
      el=min(el,abs(a));
    }
    cout<<el<<endl;
    return 0;
}
https://codeforces.com/problemset/problem/1866/A
