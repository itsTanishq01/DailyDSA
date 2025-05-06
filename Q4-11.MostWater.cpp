#include <iostream>
#include <vector>

using namespace std;
/*
class Solution {
    public:
    
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1;   
        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++)
            {
                int width = j - i;
                int height = min(height[i], height[j]);
                int area = width * height;
            }
        }      
    }
};
*/
//optimal solution
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int maxWater = 0;
            int left = 0, right = height.size()-1;
            
            while(left < right)
            {
                int h = min(height[left], height[right]); 
                int w = right - left;
        
                int currWater = h * w;
                maxWater = max(maxWater, currWater);
    
                height[left] < height[right] ? left++ : right--;
            }
    
            return maxWater;
        }
    };
    