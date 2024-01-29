#include<iostream>
using namespace std;

class Complex
{
   private: 
           int  real, imag;
    public:
            Complex(int r=0, int i=0)
            {
                real =r;
                imag =i;
            }
            Complex operator + (Complex const &obj)
            {    
                   Complex result;
                   result.imag= imag + obj.imag;
                   result.real= real + obj.real;
                   return result;
            }
            void display(){
                cout<<"r"<<real<<" + i"<<imag<<endl;
            }
           };

           int main()
           {
            Complex c1(5,6), c2(8,6);
            Complex c3 = c1 + c2;
            c3.display();
            return 0;
       }

