class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        unordered_map<int, int>m;

// store data in map
        for(int i=0; i< n ; i++){
            m[arr[i]]++;
            
        }

//find minimum frequency
        int minm=INT_MAX;
        int maxm=INT_MIN;
        int ans=0;
       for(int i=0; i<n ; i++){
           if(m[arr[i]]<minm){
               minm=m[arr[i]];
               
           }
       }

//at minimum frequency determine max value
       for(int i=0; i< n;i++){
           if(m[arr[i]]==minm && arr[i]>=maxm){
               maxm=arr[i];
               ans=i;
           }
       }
        
        return arr[ans];
    }
};
