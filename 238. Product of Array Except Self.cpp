#include <vector>
using namespace std;    


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int boyut=nums.size();
        vector<int> prefix(boyut);
        vector<int> suffix(boyut);
        vector<int> result(boyut);

        
        
        prefix[0] = nums[0];
        for (int i = 1; i < boyut; i++) 
        {
            prefix[i] = prefix[i - 1] * nums[i];
        }
        
        
        suffix[boyut - 1] = nums[boyut - 1];
        for (int i = boyut - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i];
        }

        result[0]=suffix[1];
        result[boyut-1]=prefix[boyut-2];

        for(int i=1;i<boyut-1;i++){
            result[i]=suffix[i+1]*prefix[i-1];
        }


        return result;
    }
};