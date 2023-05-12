class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
    int cnt=0,i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]) cnt++;
        i++;
        j--;
    }
    return (cnt+1)/2;
}
};
