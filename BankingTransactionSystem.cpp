#include<iostream>
using namespace std;
class BankAccount{
private:
    string accountHolderName;
public:
     int balance;
     int rewardPoints;

     BankAccount(string Name, int bal, int points){
        accountHolderName=Name;
        balance=bal;
        rewardPoints=points;
     }

     void withdraw(){
        balance=balance-500;
        rewardPoints=rewardPoints-20;
     }
     void displayAccount(){
        cout<<"Account holder name--"<<accountHolderName<<endl;
        cout<<"balance--"<<balance<<endl;
        cout<<"reward points--"<<rewardPoints<<endl;
     }
     };
     int main(){
      BankAccount acc("Ishika",5000,200);
       cout<<"before withdrawal"<<endl;
      acc.displayAccount();

      acc.withdraw();

      cout<<"after withdrawal"<<endl;
      acc.displayAccount();

      return 0;
     }


