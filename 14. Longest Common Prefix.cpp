#include <string>

#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string last = strs.back();

        int minimum = min(first.size(), last.size());
        
        int i = 0;
        while (i <minimum && first[i]== last[i]) {
        i++;}
        
        return first.substr(0, i);
    }
};

//https://www.geeksforgeeks.org/dsa/longest-common-prefix-using-sorting/
//I couldnt figure out how to deal, but after I saw the sorting , it was pretty easy


