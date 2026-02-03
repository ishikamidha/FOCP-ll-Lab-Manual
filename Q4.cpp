#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int itemno;
    int qty;
    int unitprice;
    cin>> itemno;
    cin>> qty;
    cin>> unitprice;


    int amount= qty*unitprice;
    int final_amount= amount *20/100;
    cout<< final_amount;
    return 0;


}