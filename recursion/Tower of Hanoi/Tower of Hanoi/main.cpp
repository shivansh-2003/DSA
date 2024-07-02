

#include <iostream>
using namespace std;
void towerofHanoi(int n,char src,char des,char hel)
{
    if(n==0)
    {
        return ;
    }
    towerofHanoi(n-1,src,hel,des);
    cout<<"Move from"<<src<<"to"<<des<<endl;
    towerofHanoi(n-1,hel,des,src);
}
int main()
{
    towerofHanoi(5, 'A', 'B', 'C');
}
