#include <iostream>
using namespace std;
class Student{
private:
    int marks;         //Private: only accessible inside this class 

protected:
    int rollNumber;    //Private: accessible inside  class (and derived classes)


public:                //Public: accessible everywhere
    string Name;


    //Setter for private and Protected data
    void setData(int m, int r){
        marks=m;
        rollNumber=r;
    }
    //Getter for private data
    int getMarks(){
        return marks;
    }

    //Function to show protected data
    void showrollNumber(){
        cout<<"roll Number"<<rollNumber<<endl;
    }
};
int main(){
    //Object creation
    Student s1;

    //Accessing public member
    s1.Name = "Alice";

    //Setting private and protected values
    s1.setData(90,101);

    cout<< "Name: " << s1.Name << endl;
    cout<< "marks: " << s1.getMarks()<< endl;

    //Acceessing protected data using public function
    s1.showrollNumber();

    //these would cause ERRORS if uncommented:
    //s1.marks =  90;       (private)
    //s1.rollNumber = 101;  (protected)
    return 0;
}