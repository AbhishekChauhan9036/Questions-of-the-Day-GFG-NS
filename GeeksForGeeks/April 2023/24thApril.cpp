

class Solution
{
public:
   vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n=arr.size();
        vector<pair<int,int>>next(n),prev(n);
        
        // next smaller element
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and arr[st.top().second]>=arr[i])
                st.pop();
                
            if(st.empty())  next[i]={-1,i};
            else    next[i]=st.top();
            st.push({arr[i],i});
        }
        
        // prev smaller element
        stack<pair<int,int>>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() and arr[s.top().second]>=arr[i])
                s.pop();
                
            if(s.empty())  prev[i]={-1,i};
            else    prev[i]=s.top();
            s.push({arr[i],i});
        }
        
        vector<int>ans;
        // checking nearest ones
        for(int i=0;i<n;i++)
        {
            int disN=next[i].second-i,disP=i-prev[i].second;
            int hN=next[i].first,hP=prev[i].first;
            if(disN<disP)
            {
                if(hN!=-1) ans.push_back(next[i].second);
                else if(hP!=-1)    ans.push_back(prev[i].second);
                else if(hN==hP and hN!=-1) ans.push_back(prev[i].second);
                else ans.push_back(-1);
            }
            else if(disP<disN)
            {
                if(hP!=-1) ans.push_back(prev[i].second);
                else if(hN!=-1)    ans.push_back(next[i].second);
                else if(hN==hP and hN!=-1) ans.push_back(prev[i].second);
                else ans.push_back(-1);
            }
            else
            {
                if(hN<hP and hN!=-1) ans.push_back(next[i].second);
                else if(hN>hP and hP!=-1) ans.push_back(prev[i].second);
                else if(hN==hP and hN!=-1) ans.push_back(prev[i].second);
                else ans.push_back(-1);
            }
        }
        return ans;
    }
};

