#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;             // Input 3 numbers
    if (a > b)                      // Condition box
    {
        if (a > c)                  // Condition box
        {
            cout << a;              // Implies a > b and a > c 
        }
        else
        {
            cout << c;              // Implies a > b and c > a
        }
    }
    else
    {
        if (b > c)                  // Condition Box
        {
            cout << b;              // Implies b > a and b > c
        }
        else
        {
            cout << c;              // Implies b > a and c > b
        }
    }
    return 0;
}
