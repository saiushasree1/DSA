vector <int> nearlySorted(int arr[], int n, int k){
        // Your code here
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<=k;i++){
            q.push(arr[i]);
        }
        vector<int> ans;
        for(int i=k+1;i<n;i++){
            ans.push_back(q.top());
            q.pop();
            q.push(arr[i]);
        }
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();
        }
        return ans;
    }
https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
