public:
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries){
        vector<char> ans;
        
        for(auto q:queries){
            if(q.size() == 3){
                //type:1:
                // cout<<(q[1][0]-'0')<<endl;
                int ind = 0;
                for(auto c:q[1]){
                    ind = ind*10 + (c-'0');
                }
                // cout<<ind<<endl;
                s[ind] = q[2][0];
            }
            else{

                //type 2:


                int ind1 = 0;
                for(auto c:q[1]){
                    ind1 = ind1*10 + (c-'0');
                }
                int ind2 = 0;
                for(auto c:q[2]){
                    ind2 = ind2*10 + (c-'0');
                }
                
                int ind3 = 0;
                for(auto c:q[3]){
                    ind3 = ind3*10 + (c-'0');
                }
                
                vector<int> freq(26, 0);
                
                for(int i = ind1; i<=ind2; i++){
                    freq[s[i]-'a']++;
                }
                
                // for(int i = 0; i<26; i++){
                //     cout<<(char)('a'+i)<<" "<<freq[i]<<endl;
                // }
                
                for(int i = 25; i>=0; i--){
                    ind3 -= freq[i];
                    if(ind3<=0){
                        ans.push_back((char)('a'+i));
                        break;
                    }
                }
                
            }
        }
        return ans;
    }
