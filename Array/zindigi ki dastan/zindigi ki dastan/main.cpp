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
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        res=res^arr[i];
    }
    cout<<res;
}
