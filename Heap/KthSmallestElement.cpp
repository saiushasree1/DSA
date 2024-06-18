int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> q;
        for(int i=l;i<=r;i++){
            q.push(arr[i]);
            while(q.size()>k){
                q.pop();
            }
        }
        return q.top();
    }
https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
