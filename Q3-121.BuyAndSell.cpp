#include <vector>
using namespace std;
#include <iostream>
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int maxProfit = 0;
            int bestBuy = 0;

            for(int i = 0; i < prices.size(); i++)
            {
                if(prices[i] > bestBuy)
                {
                    maxProfit = max(maxProfit, prices[i] - bestBuy);
                }
                else
                {
                    bestBuy = prices[i];
                }
            }
        }
    };