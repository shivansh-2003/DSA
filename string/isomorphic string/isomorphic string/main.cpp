#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        if(s.length() != t.length())    return false;

        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;

        for(int i=0; i<s.size(); i++)
        {
            //not in map
            if(mp1.count(s[i])==0 && mp2.count(t[i])==0)
            {
                //insert
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }

            else if(mp1.count(s[i])==1 && mp2.count(t[i])==1)
            {
                if(mp1[s[i]]==t[i] && mp2[t[i]]==s[i])  continue;
                else return false;
            }

            else    return false;
        }
        return true;
    }
};
int main()
{
    Solution s;
    string str1,str2;
    cin>>str1>>str2;
    cout<<s.isIsomorphic(str1, str2);
}
