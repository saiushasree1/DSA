int totalFruits(int N, vector<int> &fruits) {
        int f=-1,s=-1;int r=0,fi=0,si=0;
        for(int i=0;i<N;i++){
            if(f==-1 && s==-1){
                f=fruits[i];
                fi=i;
            }
            else if(s==-1 && fruits[i]!=f){
                s=fruits[i];
                si=i;
                break;
            }
        }
        int maxlen=0;
        if(fi==N-1 ||si==N-1) return N;
        for(int i=r+1;i<N;i++){
            if(fruits[i]!=f && fruits[i]!=s){
                if(si<fi){
                    r=si+1;
                    si=i;
                    s=fruits[i];
                }
                else{
                    r=fi+1;
                    fi=i;
                    f=fruits[i];
                }
            }
            else if(fruits[i]==f){
                fi=i;
            }
            else if(fruits[i]==s){
                si=i;
            }
            maxlen=max(maxlen,i-r+1);
        }
        return maxlen;
    }
https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1
