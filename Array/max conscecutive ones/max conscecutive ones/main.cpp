
#include <iostream>
using namespace std;
int findconsecutive(int arr[])
{
    int len=sizeof(arr);
    int count=0;
    int Max=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==1)
            count++;
        else
            count=0;
        Max=max(count,Max);
    }
    return Max;
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
    cout<<findconsecutive(arr);
}
