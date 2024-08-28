#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void accept1()
    {
        cout << "\n\nEnter any number";
        cin >> a;
    }
    void display1()
    {
        cout << "\n\n A: " << a;
    }
};
class B : public A
{
    int b;

public:
    void accept2()
    {
        cout << "\n\nEnter any number";
        cin >> b;
    }
    void display2()
    {
        cout << "\n\n B: " << b;
    }
};
class C
{
    int c;

public:
    void accept3()
    {
        cout << "\n\n Enter any number:";
        cin >> c;
    }
    void display3()
    {
        cout << "\n\n C: " << c;
    }
};
class D : public B, public C
{
    int d;

public:
    void accept()
    {
        cout << "\n\n Enter any number:";
        cin >> d;
    }
    void display()
    {
        cout << "\n\n D: " << d;
    }
};
int main()
{
    D obj;
    cout << "\n\n Accept Data";
    obj.accept1();
    obj.accept2();
    obj.accept3();
    obj.accept();
    cout << "\n\n Display Data";
    obj.display1();
    obj.display2();
    obj.display3();
    obj.display();
    return 0;
}