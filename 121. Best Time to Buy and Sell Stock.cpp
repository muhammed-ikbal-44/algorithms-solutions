#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0]; //ben tek tek aramıştım ama hepsini birden aramak çok
        int max_profit = 0;        // daha mantıklı, baya iyi çözüm.

    
        for (int i = 1; i < prices.size(); ++i) {
            
            if (prices[i] < min_price) {
                min_price = prices[i];
            }
            int profit = prices[i] - min_price;
            if (profit> max_profit) {
                max_profit = profit;
            }
        }

        return max_profit;
    }
};