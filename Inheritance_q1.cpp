#include <iostream>
#include<string.h>
using namespace std;
class Vehicle{
    public:
    int V_no;
    int rentalPrice;

    void displayDetails(int V,int R){
        int V_no= V;
        int rentalPrice=R;
        cout<<"Vehicle number"<<V_no<<endl<<"rental price"<<rentalPrice<<endl;
    }

};

class Car:public Vehicle{
    int no_CarSeats;
    string Cartype;

};

int main(){
    Car c1;
    c1.displayDetails(208,1200);
    return 0;
}
