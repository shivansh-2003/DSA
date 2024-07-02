
/*#include <iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
   return (arr[0]<arr[1] && restarray);
}
int main()
{
    int arr[]={1,78,3,4,5};
    cout<<sorted(arr, 5)<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    if(arr[0]<arr[1])
        return false;
    bool restarray=sorted(arr+1,n-1);
   return restarray;
}
int main()
{
    int arr[]={1,78,3,4,5};
    cout<<sorted(arr, 5)<<endl;
    return 0;
}
