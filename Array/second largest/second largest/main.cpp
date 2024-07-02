
#include <iostream>
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
    int lar=arr[0],sec;
    for(int i=0;i<n;i++)
    {
        if(lar<arr[i])
        {
            sec=lar;
            lar=arr[i];
        }
    }
    cout<<sec;
}
