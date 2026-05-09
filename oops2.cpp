/*#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:
    void setValues(float b, float h) {
        base = b;
        height = h;
    }

    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t;   // object created

    float b, h;
    cout << "Enter base and height: ";
    cin >> b >> h;

    t.setValues(b, h);

    cout << "Area of triangle = " << t.area();

    return 0;
}*/

//above same code with the use of constructors
/*#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:

    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    float b, h;
    cout << "Enter base and height: ";
    cin >> b >> h;

    Triangle t(b, h);  

    cout << "Area of triangle = " << t.area();

    return 0;
}*/

//SAME CODE AS ABOVE WITH THE USE OF CONSTRUCTOR OVERLOADING
#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:
    // 1️⃣ Default constructor
    Triangle() {
        base = 0;
        height = 0;
    }

    // 2️⃣ Parameterized constructor
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    // using default constructor
    Triangle t1;
    cout << "Area using default constructor = " << t1.area() << endl;

    // using parameterized constructor
    float b, h;
    cout << "Enter base and height: ";
    cin >> b >> h;

    Triangle t2(b, h);
    cout << "Area using parameterized constructor = " << t2.area();

    return 0;
}