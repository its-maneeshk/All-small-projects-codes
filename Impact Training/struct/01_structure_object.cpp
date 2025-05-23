#include<iostream>
using namespace std;
struct student {
    string fname;
    string lname; 
    string relation;
    int age;
} studentObj;
int main() {
    studentObj.fname = "Rahul";
    studentObj.lname = "Patel";
    studentObj.relation = "son";
    studentObj.age = 17;

    cout<<"Student Detail:\n"<<studentObj.fname<<" "<<studentObj.lname<<" "<<studentObj.relation<<" "<<studentObj.age<<" Y/O"<<endl;
}