#include<iostream>
using namespace std;
class apnaCollege
{
public:
//Function with no arguments
void fun()                      
{
    cout<<"I am the function with no argument"<<endl;

}
//Function with arguments
void fun(int x)
{
    cout<<"I am the function with single argument"<<endl;
}
//Function with double arguments
void fun(double x)
{
    cout<<"I am the function with double argument"<<endl;
}
};
int main()
{
    apnaCollege obj;
    obj.fun();
    obj.fun(3);
    obj.fun(4.5);
};
