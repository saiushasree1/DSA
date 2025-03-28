#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0,a=0;
        for(int i=0;i<n-1;i++){
          cin>>a;
          sum+=a;
        }
        cout<<-1*sum<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1877/A
