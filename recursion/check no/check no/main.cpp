

#include <iostream>
using namespace std;
bool checkNumber(int input[], int size, int x)
{
    if(size==0)
    {
      return false;
    }
    if(x==input[size-1])
    return true;
    else
      return checkNumber(input , size - 1, x);
   
}

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
    cout<<checkNumber(arr ,n,x);
}
