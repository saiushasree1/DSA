#include <iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool odd=false;
        int res=0;
        int c=0;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(i==0){
            if(a[i]%2==0) odd=false;
            else odd=true;
            c=1;
          }
          else{
            if(odd==true && a[i]%2==1){
              c++;
            }
            else if(odd==false && a[i]%2==0){
              c++;
            }
            else{
              res+=(c-1);
              if(odd==true) odd=false;
              else odd=true;
              c=1;
            }
          }
        }
        res+=(c-1);
        cout<<res<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1777/A
