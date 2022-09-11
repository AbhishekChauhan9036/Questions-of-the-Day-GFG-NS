class Solution {
public:
    int partitionString(string s) {
        int i = 0;int IUYT = s.size();int atpmn = 0;
        unordered_set<char> ooP;
        while(i < IUYT)
        {
            if(ooP.find(s[i])== ooP.end()){ ooP.insert(s[i]); i++; }
            else{ooP.clear();atpmn++;ooP.insert(s[i]);i++;}
        }
        return atpmn+1;
    }
};