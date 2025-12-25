#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0; int curr_h = 0;
        int sum = 0;

        int size = height.size();
        if (size <= 2) return 0;

        for (int i = 0; i < size - 1; i++) {

            if (height[i] > height[i + 1]) {
                curr_h = height[i];
                sum = 0;

                bool found = false;
                int j = i + 1;

                // "curr_h kadar" sağ duvar arıyoruz
                for (; j < size; j++) {
                    if (height[j] >= curr_h) { // tam çukur
                        found = true;
                        break;
                    }
                    sum += (curr_h - height[j]);
                }

                if (found) {
                    water += sum;
                    i = j - 1; // for i++ yapacağı için
                } else {
                    // curr_h bulamadık: sağdaki en yüksek duvarı bul
                    int best_h = height[i + 1];
                    int best_j = i + 1;
                    for (int t = i + 2; t < size; t++) {
                        if (height[t] > best_h) {
                            best_h = height[t];
                            best_j = t;
                        }
                    }

                    // best_h ile (min(sol, sağ)=best_h) suyu hesapla
                    int sum2 = 0;
                    for (int k = i + 1; k < best_j; k++) {
                        if (height[k] < best_h) sum2 += (best_h - height[k]);
                    }
                    water += sum2;

                   
                    i = best_j - 1;
                }
            }
        }

        return water;
    }
};
