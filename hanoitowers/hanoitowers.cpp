#include <iostream>

void towerofhanoi(int n, char start, char end);
void pm(char start, char end);


int main(){
    int sayi;
    char rod1='A';
    char rod2='B';
    std::cout<<"Bir sayi giriniz: "<<std::endl;
    std::cin>>sayi;

    towerofhanoi(sayi,rod1,rod2);
    
    
    return 0;
}
void pm(char start, char end){
    std::cout<<start<<" -> "<<end<<std::endl;
}

void towerofhanoi(int n, char start, char end){
    if(n==1){
        pm(start,end);
    } else {
        char other = 'A' + 'B' + 'C' - start - end;
        towerofhanoi(n-1,start,other);
        pm(start,end);
        towerofhanoi(n-1,other,end);
    }
    

}

