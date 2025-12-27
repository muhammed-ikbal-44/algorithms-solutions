#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int مؤشر =0;

        for (int i =0; i<t.length(); i++) {
            if (مؤشر <s.length() && t[i]== s[مؤشر]) {
                مؤشر++;
            }
        }
        return مؤشر == s.length();
    }
};
