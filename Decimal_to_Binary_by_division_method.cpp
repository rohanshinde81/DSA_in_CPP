#include<iostream>
using namespace std;
int decimalToBinaryMethod1(int n)
{   // Division Method
    
    while(n>0)
    {
        int bit = n%2;
        cout<<bit<<endl;
        n = n/2;
    }
    return 0;
} 
int main()
{
    int n;
    cin>>n;
    cout<<"Binary no of this no is :"<<endl;
    int binary = decimalToBinaryMethod1(n);
}
