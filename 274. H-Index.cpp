#include <vector>  
using namespace std;

class Solution {
public:
    

    void ins_sort(vector<int>& liste){
        int boyut=liste.size();
        for(int i=1; i<boyut ;i++){
            int key=liste[i];
            int j=i-1;
            while(j>=0 && liste[j]<key){
                liste[j+1]=liste[j];
                j--;
            }
            liste[j+1]=key;
        }
    }
    
    int hIndex(vector<int>& citations) {
        ins_sort(citations);
        int size=citations.size();
        
        
        int result=0;
        for(int i=0;i<size;i++){
            if(citations[i]>=i+1){
                result++;
            }
        }
        return result;
    }


};