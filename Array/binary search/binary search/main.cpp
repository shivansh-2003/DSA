
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
    int end=n;
    int start=0;
    int mid=(end+start)/2;
    int key;
    cin>>key;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(key==mid)
            index =mid;
        else if(key<mid)
            end=mid-1;
            
        else
            start=mid+1;
        index=i;
    }
    cout<<index;
}
