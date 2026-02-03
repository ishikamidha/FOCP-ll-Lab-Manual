#include<iostream>
using namespace std;
int main(){
    int inputs[5];
    
    for(int i=0;i<5;i++){
        cin>>inputs[i];
    }
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<5;i++){
        if (inputs[i]%2==0){
            sum_even+=inputs[i];
        }
        else if ( inputs[i]%2!=0){
            sum_odd+=inputs[i];

        }
    }
    
    cout<<"sum of even no"<<sum_even<<endl;
    cout<<"sum of odd no"<<sum_odd<<endl;

}