vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int> s;
        for(int i=0;i<n+2;i++){
            int j=abs(arr[i]);
            if(arr[j]>0){
                arr[j]=-arr[j];
            }
            else{
                s.push_back(j);
            }
        }
        
        return s;
    }
https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1
