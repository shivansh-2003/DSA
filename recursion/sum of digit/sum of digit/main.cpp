

#include <iostream>
using namespace std;
int sumOfDigits(int n)
 {
  if (n != 0) {
    return (n % 10 + sumOfDigits(n / 10));
  } else {
    return 0;
  }
}


int main()
{
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
}
