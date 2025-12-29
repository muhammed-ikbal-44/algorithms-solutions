#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int nig=numbers.size();
        int left=0; int right =nig -1;

        for(int i=0;i<nig;i++){
            if(numbers[left]+numbers[right]>target){
                right--;
            }
            else if(numbers[left]+numbers[right]<target){
                left++;
            } else{
                return {left+1,right+1};
            }
        }

        return {};
    }
};
