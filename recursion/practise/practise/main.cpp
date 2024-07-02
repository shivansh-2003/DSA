

#include <iostream>
using namespace std;
int count(int n)
{
    int c=0;
    if (n >= 0) {
      return 1;
    }
    int extract = count(n - 1);
    int update = extract / 10;
     
return c;
}

int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    
}
