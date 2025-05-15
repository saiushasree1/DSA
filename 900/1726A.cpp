#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int maxi=INT_MIN,mini=INT_MAX,maxe=-1,mine=-1;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]>maxi){
            maxi=a[i];
            maxe=i;
          }
          if(a[i]<mini){
            mini=a[i];
            mine=i;
          }
        }
        if(n==1) cout<<0<<endl;
        else{
          int maxdif=INT_MIN;
          for(int i=1;i<n;i++){
            maxdif=max(a[i-1]-a[i],maxdif);
          }
          maxdif=max(maxdif,a[n-1]-a[0]);
          maxdif=max({maxdif,maxi-a[0],a[n-1]-mini});
          cout<<maxdif<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1726/A
