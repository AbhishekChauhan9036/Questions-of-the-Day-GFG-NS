class Solution {
public:
    string removeStars(string tring) {
        multiset<int> inplu, badme;
         string tippical;
        for(int i = 0; i < tring.length(); i++){
            if(tring[i] == '*'){
                 inplu.insert(i);
            }
            else {
                badme.insert(i);
            }
        }
        for(int i: inplu){
            auto it = --(badme.lower_bound(i));
            badme.erase(it);
        }
       
        for(int i: badme){
             tippical += tring[i];
        }
        return tippical;
    }
};