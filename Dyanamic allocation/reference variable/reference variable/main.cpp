
#include <iostream>
using namespace std;
void increment(int n)
{
    n++;
}
int main()
{
    int i;
    i=10;
    int& j=i;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    int k=100;
    j=k;
    cout<<i<<endl;
}
