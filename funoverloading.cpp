#include <bits/stdc++.h>
using namespace std;
class Print
{
public:
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};

int main()
{
    Print obj1;

    obj1.func(7);
    obj1.func(9.132);

    obj1.func(85, 64);
    return 0;
}
