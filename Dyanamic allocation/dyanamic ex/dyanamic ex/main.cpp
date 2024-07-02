
#include <iostream>
using namespace std;
int main()
{
    int *p=new int;
    *p=10;
    cout<<*p<<endl;
    int* pa=new int[50];
    int n;
    cin>>n;//runtime allocation
    int* pa2=new int[n];
    pa2[0]=10;//*(pa2+0)
    cout<<sizeof(pa);
}
