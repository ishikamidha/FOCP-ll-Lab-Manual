#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};

class Employee:public Person{
    int emp_id;
    string department;

};

class Faculty:public Employee{
    string subject;
    string designation;
};

int main(){
    Person P1;

    return 0;
}