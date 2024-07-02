
#include <iostream>
using namespace std;
int reverse(int n)
{
    static int sum=0;
    if(n==0)
    {
        return sum;
    }
    sum=sum*10+(n%10);
    return reverse(n/10);
}


int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
}

