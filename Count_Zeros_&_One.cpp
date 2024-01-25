#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,0,0,1,0,0,1,1,0,1,0,1,0,1,0,1,0,0,1,0};
    int size = 20;
    
    int numZero =0;
    int numOne =0;
    
    for(int i=0; i<size; i++)
    {
        // if zero found, increament numZero
        if(arr[i] == 0)
        {
            numZero++;
        }
        // if one found, increament numOne
            if(arr[i] == 1)
            {
                numOne++;
            }
    }
            
            cout<<"number of Zeros"<<numZero<<endl;
            cout<<"number of Ones"<<numOne<<endl;
        }
