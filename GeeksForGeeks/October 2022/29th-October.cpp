
class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)

    {

        vector<vector<string>>ans;

        map<string,bool>mp;

        for(int i=0;i<n;i++)

        mp[contact[i]]=true;

        //sort(contact.begin(),contact.end());

        for(int i=0;i<s.size();i++)

        {

            vector<string>v;

            for(auto it:mp)

            {

                string str=it.first;

                if(it.second==true)

                {

                    if(str[i]==s[i])

                    {

                        v.push_back(str);

                    }else

                    {

                        mp[str]=false;

                    }

                }

            }

            if(v.size()==0)

            ans.push_back({"0"});

            else

            ans.push_back(v);

        }

        return ans;

    }
};