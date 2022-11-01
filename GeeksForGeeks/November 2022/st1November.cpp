class Solution{   
public:
    int findlessThanMiddle(vector<int> arr,int b){
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int mid=(r+l)/2;
            if(arr[mid]<=b){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
    int median(vector<vector<int>> &matrix, int R, int C) {
        int half=(R*C+1)/2;
        int start=1;
        int end=2001;
        while(start<=end){
            int mid=(end+start)/2;
            // cout<<mid<<endl;
            int count=0;
            for(int i=0;i<R;i++){
                count+=findlessThanMiddle(matrix[i],mid);
            }
            // cout<<"count is"<<count<<endl;
            if(count>=half){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        // cout<<endl;
        return start;
    }
};