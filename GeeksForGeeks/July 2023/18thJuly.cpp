class Solution {
	public:
	int LongestRepeatingSubsequence(string str){
    int n = str.size();
    str = '.' + str;
    vector<int> prev(n+1), curr(n+1);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(str[i] == str[j] && i != j)
                curr[j] = 1 + prev[j-1];
            else
                curr[j] = max(prev[j], curr[j-1]);
        }
        prev = curr;
    }
    return curr[n];
}

};
