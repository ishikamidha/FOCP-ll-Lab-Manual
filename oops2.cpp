#include <iostream>
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
}
