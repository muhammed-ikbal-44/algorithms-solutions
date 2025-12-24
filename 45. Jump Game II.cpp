#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        
        if(nums.size()<=1) return 0;
        int count=0;
        int max1=0,max2=0;

        for(int i=0;i<nums.size()-1;i++){
            if(max2 <= nums[i]+i) max2=nums[i]+i;

            if(max1==i){ //hedefe vardıysak
                count++;
                max1=max2;
            }
        }

        return count;
    }
};