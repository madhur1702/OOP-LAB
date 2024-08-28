#include <iostream>
#include <conio.h>
using namespace std;
class Base1
{
protected:
    int a;

public:
    void accept1()
    {
        cout << "\n\n Enter Any number";
        cin >> a;
    }
    void display1()
    {
        cout << "\n\nA: " << a;
    }
};
class Base2
{
protected:
    int b;

public:
    void accept2()
    {
        cout << "\n\n Enter Any number";
        cin >> b;
    }
    void display2()
    {
        cout << "\n\nB: " << b;
    }
};
class Derived : public Base1, public Base2
{
    int add;

public:
    void calculate()
    {
        add = a + b;
        cout << "\n\nSum: " << add;
    }
};
int main()
{
    Derived D;
    D.accept1();
    D.display1();
    D.accept2();
    D.display2();
    D.calculate();
    return 0;
}