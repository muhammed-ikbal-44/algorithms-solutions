#include <iostream>
#include <string>
#include <ctime>

struct Car
{
  std::string model;
  int year;
  std::string color;
};
void printcar(Car &car);
void paintcar(Car car,std::string color1);
int main() {
    Car car1;
    car1.model="Toyota";
    car1.year=1996;
    car1.color="Blue";

    Car car2;
    car2.model="Opel";
    car2.year=1944;
    car2.color="Camuflage";

    
    std::string dye;
    std::cout<<"Enter a color name to dye your car: "<<std::endl;
    std::cin>>dye;
    paintcar(car1,dye);
    printcar(car1);
  return 0;
}

void printcar(Car &car){
  
  std::cout<<&car<<std::endl;
  std::cout<<car.model<<std::endl;
  std::cout<<car.year<<std::endl;
  std::cout<<car.color<<std::endl;
}

void paintcar(Car car, std::string color1){
  
  car.color=color1;
  
}






