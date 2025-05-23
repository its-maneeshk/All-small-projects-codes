// You are using Java
#include<iostream>
using namespace std;
class Car {
    public:
        string carBrand;
        string color;
        string engineType;
        int seats;
        
        void printingDetails() {
            cout << carBrand << " car is " << color <<" color, has " << seats << " and needs " << engineType << " to operate" << endl;
        }
        
        
        
};

int main() {
    
    Car c1; //declaration part
    
    c1.carBrand = "Mahindra";
    c1.color = "red";
    c1.engineType = "petrol";
    c1.seats = 4;
    
    c1.printingDetails();
    
    return 0;
    
}