
class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {

    

        unordered_map<int,int> mp;

        for(auto a:arr){

            mp[a]++;

        }

        long long int count=0;

        for(int i=0; i<arr.size();i++){

            if(mp[arr[i]]>=2){

                mp[arr[i]]--;

                mp[arr[i]+1]++;

                count++;

                arr.push_back(arr[i]+1);

            }

        }

        return count;

    }
};
