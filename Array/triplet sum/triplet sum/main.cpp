
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int triplet=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            for(int k=j+1;j<n;k++)
            {
                if( arr[i]+arr[j])
            }
        }
    }
    cout<<triplet;
}*/
#include <iostream>
using namespace std;

// #include "solution.h"

int tripletSum(int input[], int size, int x)
{
    // Write your code here
    int triplet = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            for (int k = (j + 1); k < size; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                {
                    triplet++;
                }
            }
        }
    }

    return triplet;
}
int main()
{
    int size;
    cin>>size;
    int input[size];
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<tripletSum(input,  size,  x);
   
    
}
