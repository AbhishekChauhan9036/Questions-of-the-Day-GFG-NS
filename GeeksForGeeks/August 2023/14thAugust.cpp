class Solution

{

public:

    vector<int> singleNumber(vector<int> nums) 

    {

        // Code here.

        vector <int> res;

        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size(); i++){

            if(nums[i] == nums[i+1]){

                i++;

            }else{

                res.push_back(nums[i]);

            }

            

            if(res.size() == 2){

                return res;

            }

        }

        

    }

};
