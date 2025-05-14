#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxi=0;
        char l=s[0];
        int c=1;
        for(int i=1;i<n;i++){
          if(s[i]==l){
            c++;
          }
          else{
            l=s[i];
            maxi=max(maxi,c+1);
            c=1;
          }
        }
        maxi=max(maxi,c+1);
        cout<<maxi<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1837/B
