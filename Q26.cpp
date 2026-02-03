#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float total = 0;
    float percentage;

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    cout << total << endl;
    cout << percentage;

    return 0;
}
