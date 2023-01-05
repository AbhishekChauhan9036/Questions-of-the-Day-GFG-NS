class Solution
{
public:
    string longestString(vector<string> &words)
    {
        unordered_map<string,int> m;
        for(auto i:words) m[i]++;
        sort(words.begin(),words.end());
        
        string x;
        int p=INT_MIN;
        for(auto i:words) {
            string t;
            int c=0,j,n=i.size();
            for(j=0;j<n;j++)
            {
                t+=i[j];
                if(m[t]) c++;
                // checking all prefixes
            }
            if(c==n && n>p) {
                p=n; x=i;
            }
        }
        return x;
    }
};
