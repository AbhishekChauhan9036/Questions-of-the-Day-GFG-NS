class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int left = n - 1;
            int right = 0;
            while(left >= 0 && right < m)
            {
                if(arr1[left] > arr2[right])
                {
                    swap(arr1[left],arr2[right]);
                    left--;
                    right++;
                }
                else
                {
                    break;
                }
            }
            sort(arr1,arr1 + n);
            sort(arr2,arr2 + m);
        } 
};
