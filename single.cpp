#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void acceptA()
    {
        cout << "\n\nEnter any number";
        cin >> x;
    }
    void displayA()
    {
        cout << "x: " << x;
    }
};
class B : public A
{
    int y;

public:
    void acceptB()
    {
        cout << "\n\nEnter any number";
        cin >> y;
    }
    void displayB()
    {
        cout << "y: " << y;
    }
};
int main()
{
    B obj;
    cout << "\n\n Class A";
    obj.acceptA();
    obj.displayA();
    cout << "\n\nClass B";
    obj.acceptB();
    obj.displayB();
    return 0;
}