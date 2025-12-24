#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int value = nums[0];  
        int sayac = 1;  
        int i = 1;  
         

        while (i < nums.size()) {
            if (nums[i] == value) {
                sayac++; 
            } else {
                value = nums[i]; 
                sayac = 1; 
            }

            if (sayac > 2) {
                nums.erase(nums.begin() + i);  
            } else {
                i++;  
            }
        }

        return nums.size();  
    }
};