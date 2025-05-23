#include<bits/stdc++.h>
using namespace std;

struct myStractureCar {
    string name;
    bool dieselEngine = true;
    int size;
};

struct myStractureTruck{
    int size;
    string name;
    bool panIndia = true;
};

int main() {
    myStractureCar car1;
    
    car1.name = "Mustang";
    car1.dieselEngine = false;
    car1.size = 4;
    
    myStractureTruck truck1;
    
    truck1.size = 500;
    truck1.name = "Mahindra";
    truck1.panIndia = true;
    
    cout << "Car: " << car1.name << " Diesel: " << car1.dieselEngine << " Size: " << car1.size << endl;
    cout << "Truck: " << truck1.name << " PanIndia: " << truck1.panIndia << " Size: " << truck1.size << endl;
}