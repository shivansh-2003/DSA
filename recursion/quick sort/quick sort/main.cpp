

#include <iostream>
using namespace std;
void quickSort(int a[],int si,int ei)
{
    int mid=(si+ei)/2;
    if(si>ei)
        return;
   int pi=partion(si,ei);
    quickSort(a,si,pi-1);
    quickSort(a,pi+1,ei);
}
int main()
{
    
}
