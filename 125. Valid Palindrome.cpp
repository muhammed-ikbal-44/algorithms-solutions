#include <cctype>
#include <string>
using namespace std;    


class Solution {
public:
    bool isPalindrome(string s) {
        string s2=alfanumericyapici(s);
        int size=s2.length();
        for(int i=0;i<size/2;i++){
            if(s2[i]!=s2[size-i-1]) return false;
        }
        return true;

    }

    string alfanumericyapici(string s){
        string news;
        for(int i=0;i<s.length();i++){
            if (isalnum(static_cast<unsigned char>(s[i]))) {
                news += tolower(static_cast<unsigned char>(s[i]));
            }

        } return news;
    }
};