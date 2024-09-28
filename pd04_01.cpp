#include<iostream>
using namespace std;

void isEqual(int, int);

main()
{
    int n1,n2;

    cout<<"Enter first number: ";
    cin>>n1;

    cout<<"Enter second number: ";
    cin>>n2;

    isEqual(n1,n2);
}

void isEqual(int n1, int n2)
{
    if(n1 == n2)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}