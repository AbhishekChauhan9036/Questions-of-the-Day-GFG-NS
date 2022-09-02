class Solution {
public:
    vector<int> answerQueries(vector<int>& brr, vector<int>& q) {
        sort(brr.begin(), brr.end());
        for(int hh = 1; hh < brr.size(); hh++){
            brr[hh] += brr[hh-1];
        }
        vector<int> answerw;
        for(int i: q){
            int dhan = 0; int j;
            for(j = 0; j < brr.size(); j++){ if(dhan + brr[j] > i) break;}
            answerw.push_back(j);
        }
        return answerw;
    }
};