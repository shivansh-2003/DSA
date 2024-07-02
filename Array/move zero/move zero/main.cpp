
#include <iostream>
using namespace std;
void moveZeroEnd(int arr[],int n)
{
    int temp[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp[k]=arr[n];
                 k++;
        }
    }
    while(k<n)
    {
        temp[k]=0;
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<endl;;
    }
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
}
