#include <string>

#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max_alan = 0;
        int p1 = 0;
        int p2 = height.size() - 1;
        while (p2 > p1)
        {
            max_alan = max(max_alan, (p2 - p1) * min(height[p1], height[p2]));
            if (height[p2] > height[p1])
            {
                p1++;
            }
            else
            {
                p2--;
            }
        } // ninjanın çözümdeki örnekleri görünce aydınlandım
        // benim çözüm çok daha hantal oalcaktı, harbi sağlam düşünülmüş

        return max_alan;
    }
};