#include<iostream>
using namespace std;
void swap(int &x,int &y){
    cout<<"before swap"<<x<<y;
    int temp=x;
    x=y;
    y=temp;
    cout<<"after swap"<<x<<y;

}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"values before function calling"<<num1<<num2<<endl;
    swap(num1,num2);
    cout<<"values after function calling"<<num1<<num2<<endl;

return 0;
}