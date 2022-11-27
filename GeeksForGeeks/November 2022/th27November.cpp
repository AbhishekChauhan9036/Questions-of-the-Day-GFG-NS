

class Solution{
public:	
	string addBinary(string a, string b)
	{
	    reverse(a.begin(), a.end());
	    reverse(b.begin(), b.end());
	    string ans = "";
	    int c = 0;
	    int l = 0;
	    if(a.length() > b.length())
	    {
	        while(l < a.length())
	        {
	            if(l < b.length())
	            {
	                int temp = c + (a[l] - '0') + (b[l] - '0');
	                if(temp == 0)
	                {
	                    ans.push_back('0');
	                    c = 0;
	                }
	                if(temp == 1)
	                {
	                    ans.push_back('1');
	                    c = 0;
	                }
	                if(temp == 2)
	                {
	                    c = 1;
	                    ans.push_back('0');
	                }
	                if(temp == 3)
	                {
	                    c = 1;
	                    ans.push_back('1');
	                }
	                l++;
	            }
	            else
	            {
	                int temp = c + (a[l] - '0');
	                if(temp == 0)
	                {
	                    ans.push_back('0');
	                    c = 0;
	                }
	                if(temp == 1)
	                {
	                    ans.push_back('1');
	                    c = 0;
	                }
	                if(temp == 2)
	                {
	                    c = 1;
	                    ans.push_back('0');
	                }
	                l++;
	            }
	        }
	    }
	    else
	    {
	        while(l < b.length())
	        {
	            if(l < a.length())
	            {
	                int temp = c + (a[l] - '0') + (b[l] - '0');
	                if(temp == 0)
	                {
	                    ans.push_back('0');
	                    c = 0;
	                }
	                if(temp == 1)
	                {
	                    ans.push_back('1');
	                    c = 0;
	                }
	                if(temp == 2)
	                {
	                    c = 1;
	                    ans.push_back('0');
	                }
	                if(temp == 3)
	                {
	                    c = 1;
	                    ans.push_back('1');
	                }
	                l++;
	            }
	            else
	            {
	                int temp = c + (b[l] - '0');
	                if(temp == 0)
	                {
	                    ans.push_back('0');
	                    c = 0;
	                }
	                if(temp == 1)
	                {
	                    ans.push_back('1');
	                    c = 0;
	                }
	                if(temp == 2)
	                {
	                    c = 1;
	                    ans.push_back('0');
	                }
	                l++;
	            }
	        }
	    }
	    if(c == 1)
	        ans.push_back('1');
	    l = ans.length() - 1;
	    while(ans[l] == '0')
	    {
	        ans.pop_back();
	        l--;
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};

