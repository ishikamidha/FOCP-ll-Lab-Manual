#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int main() {
    int a, b, n, result;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> n;

    if (n == 1) {
        result = add(a, b);
        cout << "Result = " << result;
    }
    else if (n == 2) {
        result = subtract(a, b);
        cout << "Result = " << result;
    }
    else if (n == 3) {
        result = multiply(a, b);
        cout << "Result = " << result;
    }
    else if (n == 4) {
        if (b == 0) {
            cout << "Error: Division by zero";
        } else {
            result = divide(a, b);
            cout << "Result = " << result;
        }
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
