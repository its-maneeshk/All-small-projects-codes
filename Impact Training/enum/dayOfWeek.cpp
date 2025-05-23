#include <bits/stdc++.h>
using namespace std;

int main() {
enum dayOfWeek {
    SUNDAY = 1, 
    MONDAY = 2, 
    TUESDAY = 3, 
    WEDNESDAY = 4, 
    THRUSDAY = 5, 
    FRIDAY = 6 , 
    SATURDAY = 7
};

int dayNum;
cout<<"Enter the day number: ";
cin>>dayNum;

dayOfWeek today = dayNum;

if(dayNum == today) {
    cout<<"Day is: "<<today<<endl;
}else {
    
    cout<<"Invalid input!";
}

}