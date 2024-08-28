#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void accept1()
    {
        cout << "\n\nEnter any number";
        cin >> x;
    }
    void display1()
    {
        cout << "\n\n X: " << x;
    }
};
class B : public A
{
    int y;

public:
    void accept2()
    {
        cout << "\n\nEnter any number";
        cin >> y;
    }
    void display2()
    {
        cout << "\n\n y: " << y;
    }
};
class C : public B
{
    int z;

public:
    void accept()
    {
        cout << "\n\nEnter any number";
        cin >> z;
    }
    void display()
    {
        cout << "\n\n z: " << z;
    }
};
int main()
{
    C obj;
    cout << "\n\n Demonstration of Multi level inheritance";
    cout << "\n\n Accept Data";
    obj.accept1();
    obj.accept2();
    obj.accept();
    cout << "\n\n Display Data";
    obj.display1();
    obj.display2();
    obj.display();
    return 0;
}