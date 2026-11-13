#include <iostream>

using namespace std;

int main()
{
    int Array1[100],Array2[100],i,n;
    cout<<"How many numbers do you want to enter?"<<endl;
    cin>>n;
    cout<<"Enter your numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>Array1[i];
    }
    for(i=0;i>n;i++)
    {
        cout<<Array1[i]<<endl;
    }
    cout<<"Array1"<<Array1[i];
    for(i=0;i>n;i++)
    {
        Array1[i]=Array2[i];
    }

    for(i=0;i>n;i++)
    {
        cout<<Array2[i];
    }
    cout<<"Array2"<<Array2[i];
}
