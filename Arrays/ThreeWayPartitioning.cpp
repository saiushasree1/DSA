void threeWayPartition(vector<int>& ar,int a, int b)
    {
        // code here 
        int n=ar.size();
        queue<int> v1,v2,v3;
        for(int i=0;i<n;i++){
            if(ar[i]<a){
                v1.push(ar[i]);
            }
            else if(ar[i]>b){
                v3.push(ar[i]);
            }
            else{
                v2.push(ar[i]);
            }
        }
        int i=0;
        while(!v1.empty()){
            ar[i++]=v1.front();
            v1.pop();
        }
        while(!v2.empty()){
            ar[i++]=v2.front();
            v2.pop();
        }
        while(!v3.empty()){
            ar[i++]=v3.front();
            v3.pop();
        }
    }
https://www.geeksforgeeks.org/problems/three-way-partitioning/1
