#include <vector>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sayac=0;
        int value=nums[0];


        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                    if(value==nums[j]){
                        sayac++;
                    }
            }

            if(sayac>=(nums.size()/2+1)){
                break;
            } else {
                sayac=0;
                value=nums[i];
            }
        }
        return value;
    }
};