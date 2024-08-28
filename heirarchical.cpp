#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    void accept1()
    {
        cout << "\n\nBase Class";
        cout << "\n\nEnter any number";
        cin >> x;
    }
    void display1()
    {
        cout << "\n\nBase X: " << x;
    }
};
class Derived1 : public Base
{
    int y;

public:
    void accept2()
    {
        cout << "\n\n Derived-1 Class";
        cout << "\n\nEnter any number";
        cin >> y;
    }
    void display2()
    {
        cout << "\n\nDerived-1 y: " << y;
    }
};
class Derived2 : public Base
{
    int z;

public:
    void accept3()
    {
        cout << "\n\n Derived-2 Class";
        cout << "\n\nEnter any number";
        cin >> z;
    }
    void display3()
    {
        cout << "\n\nDerived-2 z: " << z;
    }
};
int main()
{
    Derived1 D1;
    Derived2 D2;
    cout << "\n\n Accept Derived-1 Data";
    D1.accept1();
    D1.accept2();
    D1.display1();
    D1.display2();
    cout << "\n\n Accept Derived-2 Class";
    D2.accept1();
    D2.accept3();
    D2.display1();
    D2.display3();
    return 0;
}