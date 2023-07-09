class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[],int n){
     unordered_set<int>s;
     for(int i=0;i<n;i++){
         if(arr[i]>0)s.insert(arr[i]);
       }
      for(int i=1;i<=n+1;i++){
        if(s.find(i)==s.end())return i;
      }
}
};
