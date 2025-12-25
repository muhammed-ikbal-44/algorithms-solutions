#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int func(char c){
        switch(c){
            case 'M': return 1000;  case 'D': return 500;
            case 'C': return 100;   case 'L': return 50;
            case 'X': return 10;    case 'V': return 5;
            case 'I': return 1;     default: return 53;
        }
    }
    int romanToInt(string s) {
        int size=s.length();
        int sum=0;
        for(int i=0;i<size;i++){
          if(i+1<size && func(s[i])<func(s[i+1])){
            sum-=func(s[i]);
          }else{
            sum+=func(s[i]);
          }
        }
        return sum;
    }
};