vector<int> prevSmaller(vector<int> &A) {
    stack<int> s;
    s.push(-1);
    int n=A.size();
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        while(s.top()!=-1 && A[s.top()]>=A[i]){
            s.pop();
        }
        arr[i]=s.top();
        s.push(i);
    }
    return arr;
   }
   vector<int> nextSmaller(vector<int> &A) {
    stack<int> s;
    s.push(-1);
    int n=A.size();
    vector<int> arr(n);
    for(int i=n-1;i>=0;i--){
        while(s.top()!=-1 && A[s.top()]>=A[i]){
            s.pop();
        }
        arr[i]=s.top();
        s.push(i);
    }
    return arr;
   }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),area=-1;
        vector<int> a=prevSmaller(heights),b=nextSmaller(heights);
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(b[i]==-1) b[i]=n;
            int w=b[i]-a[i]-1;
            area=max(area,l*w);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> v(matrix[0].size(),0);
        int maxarea=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                
                    if(matrix[i][j]=='0'){
                        v[j]=0;
                    }
                    else v[j]++;
            }
            maxarea=max(maxarea,largestRectangleArea(v));
        }
        return maxarea;
    }
https://leetcode.com/problems/maximal-rectangle/
