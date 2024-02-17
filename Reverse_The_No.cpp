#include <iostream>
using namespace std;

int main()
{
    int n, i, sum=0, r;
    cout<<"Enter Your no : "<<endl;
    cin>>n;
    while(n!=0)
    {
        r= n%10;
        sum = sum * 10 + r;
        n = n/10;
        
    }
    cout<<"Reverse the no is : "<<sum;

    return 0;
}
