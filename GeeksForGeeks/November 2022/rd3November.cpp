class Solution{
    public:
    int removals(vector<int>& arr, int k){

        //Code here

        // 1 2  5  6  8

        sort(arr.begin() , arr.end());

        

        int maxwindow = 0;

        int i =0 , j=0;

        

        while(j<arr.size()){

            if(arr[j] - arr[i] <=k){

                j++;

            }

            else if(i< j){

                i++;

            }

            maxwindow= max(maxwindow, j-i);

        }

        

        return (arr.size() - maxwindow);

 

    }
};