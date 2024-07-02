
#include <iostream>
using namespace std;
void Substring(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    Substring(ros, ans);
    Substring(ros, ans+ch);
}
int main()
{
    Substring("ABC", "");
}
