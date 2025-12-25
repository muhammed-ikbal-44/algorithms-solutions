#include <iostream>
#include <string>
int powe(int x){
    int sonuc=1;
    for(int i=0;i<x;i++){
        sonuc*=2;
    }
    return sonuc;
}


int main(){
    int x;
    do{
        std::cout << "Enter the gray code number " << std::endl;
        std::cin >> x;
    }while(x>16 || x<0);
    int deger=powe(x);
    std::string* arr = new std::string[deger];
    std::string baslangic = std::string(x, '0');
    

    for(int i=0;i<deger;i++){
        
    }
    
    
}