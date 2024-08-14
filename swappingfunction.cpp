#include <iostream>
using namespace std;
 int swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping \n"<<"a :"<<a<<endl<<"b :"<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter the 1st number :"<<endl;
    cin>>x;
    cout<<"Enter the 2nd number :"<<endl;
    cin>>y;
    cout<<"Before swapping \n"<<"a :"<<x<<endl<<"b :"<<y<<endl;
    swap(x,y);
    return 0;
}