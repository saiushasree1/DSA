int maxScore(vector<int>& cardPoints, int k) {
        int maxi=0;
        for(int i=0;i<k;i++){
            maxi+=cardPoints[i];
        }
        int prev=maxi;
        int n=cardPoints.size();
        for(int i=k-1;i>=0;i--){
            prev=prev-cardPoints[i]+cardPoints[n-k+i];
            maxi=max(prev,maxi);
        }
        return maxi;
    }
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
