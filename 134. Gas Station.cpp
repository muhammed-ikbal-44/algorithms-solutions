#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int flag = -1;
        int cont =0;
        int n=gas.size();
        if(n<2 && gas[n-1]>=cost[n-1]){return 0;} // I added this  stupid "if" line just because 1 case, it 
                                            // does not make sense, how a ciruit can have 1 element.
        for(int i=0;i<n;i++){
            if(gas[i]>cost[i]){
                int sum=0;
                int cont=0;
                for(int j=0;j<n;j++){
                    if(j+i>=n){
                        sum=sum+gas[j+i-n]-cost[j+i-n];
                    }else{
                        sum=sum+gas[j+i]-cost[j+i];
                    }
                    if(sum<0){
                        cont=1;
                        break;}
                }
                if(cont==1){
                    flag=-1;
                }else{
                    flag=i;
                    return flag;
                }
                
            }
           
        }




        return flag;
    }
};