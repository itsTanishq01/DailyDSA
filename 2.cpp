//LeetCode 136

//using XOR to find the single number in an array where every other number appears twice.
// The XOR of a number with itself is 0, and the XOR of a number with 0 is the number itself.
//0^0 = 0
// 0^1 = 1

//example 4 1 2 1 2

//all xor karde. 4^1^2^1^2 = 4
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ans = 0;
            for(int i = 0; i < nums.size(); i++) {
                ans ^= nums[i]; // XOR operation
            }
        }
    };