#include <iostream>
using namespace std;
int count_Bit(int n)
{
    int ans=0;
    while(n>0)
    {
        n=n&n-1;
        ans+=1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_Bit(n);
}
