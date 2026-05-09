#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int left=0;
    int right=s.length()-1;
    bool ispalin = true;
    while(left<right){
        if (s[left]!=s[right]){
            ispalin = false;
            
        }
        else{left++;
            right--;}
    
        
    }
    if(ispalin){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}