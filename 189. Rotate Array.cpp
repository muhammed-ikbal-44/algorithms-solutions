#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();  // Döndürme sayısını vektör boyutuna göre düzenle
        reverse(nums, 0, nums.size() - 1);  // Tüm vektörü ters çevir
        reverse(nums, 0, k - 1);  // İlk k elemanı ters çevir
        reverse(nums, k, nums.size() - 1);  // Kalan elemanları ters çevir
    }

    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};

/*   37/38 case passed but one left I cannot figure it
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        int a=nums.size();
        k=k%a;
        if(k>=nums.size()/2){
            for(int j=0;j<nums.size()-k;j++){
                temp=nums.front();
                nums.erase(nums.begin());
                nums.insert(nums.end(),temp);
            }
        } else {
                for(int i=0;i<k;i++){
                    temp=nums.back();
                    nums.pop_back();
                    nums.insert(nums.begin(),temp);
            }
        }
        
        
    }
};  */