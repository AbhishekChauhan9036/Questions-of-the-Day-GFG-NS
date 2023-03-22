class Solution{   
public:
    pair<string,long long> checkpr(string &s, int x){
        string temp;
        long long ans = 0;
        for(auto it: s){
            if(temp.size() && (temp.back() == 'p' && it == 'r'))temp.pop_back(),ans+=x;
            else temp+=it;
        }
        return {temp,ans};
    }
    pair<string,long long> checkrp(string &s, int y){
        string temp;
        long long ans = 0;
        for(auto it: s){
            if(temp.size() && (temp.back() == 'r' && it == 'p'))temp.pop_back(),ans+=y;
            else temp+=it;
        }
        return {temp,ans};
    }
    long long solve(int X,int Y,string S){
        pair<string,long long>temp1 = checkpr(S,X);
        pair<string,long long>temp2 = checkrp(temp1.first,Y);
        
        pair<string,long long>temp3 = checkrp(S,Y);
        pair<string,long long>temp4 = checkpr(temp3.first,X);
        
        return max(temp1.second+temp2.second,temp3.second+temp4.second);
    }
};
