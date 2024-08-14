#include <iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    cout<<"Enter the number of rows:"<<endl;
    cin>>r;
    cout<<"Enter the number of columns:"<<endl;
    cin>>c;
    cout<<"Enter the elements of array1:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Element of array a"<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of array2:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Element of array b"<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];            
        }
    }
    cout<<"Sum of two matrix is "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}