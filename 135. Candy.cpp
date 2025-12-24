#include <vector>
using namespace std;


class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        int sum=1;
        int reverse_lay_over=0;
        int layover_number=0;
        int peak_reverse = 0;

        

        for(int i=0;i<n-1;i++){
            if(ratings[i]>ratings[i+1]){
                layover_number++;
                reverse_lay_over=0;
                if(layover_number <= peak_reverse){     //Bu ifi eklemek zorudnayım yoksa azalmaya başlarken
                    sum+=layover_number;                // ya 1 eksik yada 1 fazla kalıp patlıyoruz 
                }else{                                  //buda soldan yüksekliği kontrol ediyor, reverse layover eşit ztn altta
                     sum=sum+layover_number+1;          //anlamak için 1,2,3,2,1 örneğini çöz, ekleme yapmazsak 2 tane falzadan verecek
                }

            } else if(ratings[i]==ratings[i+1]){
                layover_number=0;
                reverse_lay_over=0;
                peak_reverse=0;
                sum+=1;

            } else {
                reverse_lay_over++;
                peak_reverse = reverse_lay_over;
                layover_number=0;


                sum=sum+reverse_lay_over+1;
            }
        }

        return sum;
    }
};