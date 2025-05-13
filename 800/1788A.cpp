#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int t=0;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==2) t++;
        }
        if(t%2) cout<<-1<<endl;
        else{
          int c=0;
          for(int i=0;i<n;i++){
            if(a[i]==2) c++;
            if(t/2 == c){
              cout<<i+1<<endl;
              break;
            }
          }
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1788/A
