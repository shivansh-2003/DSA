

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    int found=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key){
            found=i;
            break;
        }}
    cout<<found;
}
