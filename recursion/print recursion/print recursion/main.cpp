

#include <iostream>//bactracking
using namespace std;
int print(int i,int n)
{
    if(i<1)
    {
        return 0;
    }
    print(i-1,n);
    cout<<i;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    print(n,n);
}
