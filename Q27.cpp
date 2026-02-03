#include<iostream>
using namespace std;
int main(){
    float prices[10];
    for(int i=0;i<10;i++){
        cin>>prices[i]; }

    int max=prices[0];

    for (int i=0;i<5;i++){
        if(prices[i]>max){
            max=prices[i];
        }
    }
    cout<<"maximum price"<<max<<endl;
    return 0;
}