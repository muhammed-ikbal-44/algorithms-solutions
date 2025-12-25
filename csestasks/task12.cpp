#include <iostream>
#include <math.h>


int main(){
    int n;
    std::cout<<"bir deger girin: ";
    std::cin>>n;
    std::cout<<std::endl;
    int sayac=0;


    int no=pow(2,n);
    for (int i = no-1; i >= 0; i--)
    {
        int kalan=i;
        for(int k=n-1; k>=0;k--)
        {
            int a=pow(2,k);
            std::cout<<kalan/a;
            if(kalan/a)
            kalan-=a;
        }
        sayac++;
        if(sayac%n==0){
            std::cout<<std::endl;
        } else{
            std::cout<<" ";
        }
        
    }

}