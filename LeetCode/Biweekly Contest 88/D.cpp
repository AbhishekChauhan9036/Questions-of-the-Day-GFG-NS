#include<cmath>
// #incluse<iostream>

#include<ext/pb_ds/assoc_container.hpp>


#include<bits/stdc++.h> 
#include<ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
using namespace std;


class Solution {
public:
   long long numberOfPairs(vector<int>& num1, vector<int>& num2, int diff) { long long Answer=0;  tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> UTTAR;
      for(int i=0;i<(int)num1.size();++i) {
         Answer+=UTTAR.order_of_key((long long)(num1[i]-num2[i]+diff+1)*100000);   UTTAR.insert(((long long)(num1[i]-num2[i])*100000)+i);
      }
      return Answer;
   }
};