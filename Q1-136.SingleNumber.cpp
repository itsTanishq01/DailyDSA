#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int answer = 0;
            
            for(int val:nums)
            {
                answer ^= val; 
            }
            return answer;
        }
    };