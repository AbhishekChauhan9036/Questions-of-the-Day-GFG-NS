
class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		    sort(s.begin(), s.end());
		    vector<string> res;
		    string str = s;
		    while(1){
		        res.push_back(s);
		        next_permutation(s.begin(), s.end());
		        if(str == s)break;
		    }
		    return res;
		}
};
