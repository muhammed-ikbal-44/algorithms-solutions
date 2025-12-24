#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalkar=0;
        int n=prices.size();
        for(int j=0;j<n-1;j++){

            if(prices[j]<prices[j+1]){
                totalkar=(prices[j+1]-prices[j]) + totalkar;
            }

        }
        return totalkar;
    }
};