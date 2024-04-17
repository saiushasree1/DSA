int merger(int arr[],int s,int mid,int e){
        int n1=mid-s+1,n2=e-mid;
        vector<int> a1(n1,0);
        vector<int> a2(n2,0);
        int k=0,inv=0;
        for(int i=s;i<=mid;i++){
            a1[k++]=arr[i];
        }
        k=0;
        for(int j=mid+1;j<=e;j++){
            a2[k++]=arr[j];
        }
        int i=0,j=0;
        k=s;
        while(i<n1 && j<n2){
            if(a1[i]<=a2[j]){
                arr[k++]=a1[i++];
            }
            else{
                arr[k++]=a2[j++];
                inv+=n1-i;
            }
        }
        while(i<n1){
            arr[k++]=a1[i++];
            
        }
        while(j<n2){
            arr[k++]=a2[j++];
        }
        return inv;
    }
    int merge(int arr[],int s,int e){
        int inv=0;
        if(s<e){
            int mid=s+(e-s)/2;
            inv+=merge(arr,s,mid);
            inv+=merge(arr,mid+1,e);
            inv+=merger(arr,s,mid,e);
        }
        return inv;
    }
    int countPairs(int arr[] , int n ) 
    {  for(int i=0;i<n;i++){
        arr[i]=i*arr[i];
        }
        return merge(arr,0,n-1);
    }
https://www.geeksforgeeks.org/problems/count-pairs-in-an-array4145/1
