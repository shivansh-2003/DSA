#include <iostream>
using namespace std;
string removeParenthesis(string s)
{
    string res;
    int count =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('&&count==0)
        {
            count++;
        }
        else if(s[i]=='('&&count>=1)
        {
            res+=s[i];
            count++;
        }
        else if(s[i]==')'&&count>1)
        {
            res+=s[i];
            count--;
        }
        else if(s[i]==')'&&count==1)
        {
            count--;
        }
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    
    cout<<removeParenthesis(s);
    
}
