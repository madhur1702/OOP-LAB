#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={2,5,9,4,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"array before sorting: ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    sort(a,a+n);
    cout<<" \narray after sorting: ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}