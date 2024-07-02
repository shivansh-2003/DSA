

#include <iostream>
using namespace std;
int lcm(int a,int b)
{
     static int i=(a>b)?a:b;
    if(i%a==0&&i%b==0)
    {
        return i;
    }
    else
    {
        i++;
        return lcm(a, b);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a, b);
}
