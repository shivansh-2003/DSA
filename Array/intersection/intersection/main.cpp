
#include<climits>
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[n2];
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[n2]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
        }}
    }
}
