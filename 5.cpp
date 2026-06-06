 
#include <bits/stdc++.h> 
 
using namespace std; 
class Solution { 
  public: 
    int findMaxConsecutiveOnes(vector< int >& nums) { 
      int cnt = 0; 
      int maxi = 0; 
      for (int i = 0; i < nums.size(); i++) { 
        if (nums[i] == 1) { 
          cnt++; 
        } else { 
          cnt = 0; 
        } 
 
        maxi = max(maxi, cnt); //maimum of continous 1's and count of 1's in the array,on the place of 1 it can be 2 or 3,with this uou can find maximum continous numbers
      } 
      return maxi; 
    } 
}; 