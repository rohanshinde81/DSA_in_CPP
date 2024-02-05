#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {1,33,5,6,7,8,9,34,56,78,2};
    int size = 11;
    int mini = INT_MAX;
    
    for(int i=0; i<size; i++)
    {
        if(arr[i]<mini)
        {
            //found a number smaller than maxi, update mini
            mini = arr[i];
        }
    }
    cout<<"Minimum number is :"<<mini<<endl;

    return 0;
}
