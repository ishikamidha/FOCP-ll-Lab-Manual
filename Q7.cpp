#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int score1;
    int score2;
    int score3;
    cin>>score1;
    cin>>score2;
    cin>>score3;
    if(score1 > score2 && score1 > score3) {
        cout<<"score1 is highest"<<score1<<endl;}

    else if(score2 > score1 && score2 > score3) {
        cout<<"score2 is highest"<<score2<<endl;}
    else  {
        cout<<"score3 is highest"<< endl<< score3<<endl;}

    return 0;
    

}