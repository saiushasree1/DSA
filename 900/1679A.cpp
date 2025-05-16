#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long mini,maxi;
        if(n<4 || n%2) cout<<-1<<endl;
        else{
          maxi=n/4;
          if(n%6==0) mini=n/6;
          else if(n%6==2) mini=n/6 + 1;
          else if(n%6==4) mini=n/6 + 1;
          cout<<mini<<" "<<maxi<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1679/A
