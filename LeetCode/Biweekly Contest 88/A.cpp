class Solution {
public:
   bool Minus(map<char,int>chota){
        set<int>_unber;
        for(auto it:chota){
            if(it.second>0)
                _unber.insert(it.second);
        }
        if(_unber.size()==1)return true;
        return false;
    }
    bool equalFrequency(string word) {
        map<char,int>chota;
        set<int>_unber;
        for(auto it:word) chota[it]++;
        for(auto it:chota){
            chota[it.first]--;
            if(Minus(chota)) return true;
            chota[it.first]++;
        }return false;
    }
};