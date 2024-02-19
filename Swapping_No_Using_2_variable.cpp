#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;
     a = a+b;
     b = a-b;
     a = a-b;

    cout<<"After Swapping A and B are :"<<a<<" "<<b<<endl;
}
