#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void print()
    {
        cout << real << " + i" << img << "\n";
    }
};
int main()
{
    complex c1(20, 10), c2(4, 8);
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}