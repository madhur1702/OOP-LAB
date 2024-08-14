#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the 1st number"<<endl;
    cin>>a;
    cout<<"Enter the 2nd number"<<endl;
    cin>>b;
    cout<<"Before swapping \n"<<"a :"<<a<<endl<<"b :"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping \n"<<"a :"<<a<<endl<<"b :"<<b<<endl;
    return 0;
}