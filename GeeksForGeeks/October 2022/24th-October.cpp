vector<alphanumeric> sortedStrings(int N, vector<string> A) {

        map<string,int> mp;

        

        for(auto &str: A){

            mp[str]++;

        }

        

        vector<alphanumeric> res;

        

        for(auto &p: mp){

            struct alphanumeric temp;

            temp.name = p.first;

            temp.count = p.second;

            res.push_back(temp);

        }

        

        return (res);

    }