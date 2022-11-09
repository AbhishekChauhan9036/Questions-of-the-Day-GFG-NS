class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& arrty) {
        int Uttar = 0 ;
        int _TYU = nums1.size();
        int _UYTR = arrty.size();
        int xor1 = 0 , xor2 = 0;
        for (int i = 0 ; i < _TYU ;i++)xor1^=nums1[i];
        for (int i = 0 ; i < _UYTR ;i++)xor2^=arrty[i];
        if (_TYU % 2 == 1 && _UYTR % 2 == 0) Uttar = xor2;
        else if (_TYU % 2 == 0 && _UYTR % 2 == 0 )Uttar = 0;
        else if (_TYU % 2 == 1 && _UYTR % 2 == 1 ) Uttar = xor1 ^ xor2 ;
        else if (_TYU % 2 == 0 && _UYTR % 2 == 1 )Uttar = xor1 ;
        return Uttar;      
        //.….......
    }
};
