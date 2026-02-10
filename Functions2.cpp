#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int u = 1; u <= n-i; u++)
        {
            cout<<"  ";}
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                cout << "* ";
            }
    cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}