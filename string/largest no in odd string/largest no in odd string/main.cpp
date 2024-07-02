#include <iostream>
using namespace std;
string largestOddNumber(string num) {
      for(int i=num.size()-1;i>=0;i--){
          if(num[i]%2==0) num.pop_back();
          else break;
      }
      return num;
   }
int main()
{
    string s;
    cin>>s;
    cout<<largestOddNumber(s);
}

