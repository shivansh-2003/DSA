#include <iostream>
#include<vector>
using namespace std;
string LongestCommonPrefix(vector<string>& s)
{
    sort(s.begin(),s.end());
    
    string ans="";
    
    int n=s.size();
    
    string start=s[0];
    string end=s[n-1];
    
    for(int i=0;i<min(start.size(),end.size());i++)
    {
        if(start[i]!=end[i])
        {
            return ans;
        }
        else
        {
            ans+=start[i];
        }
    }
    return ans;
}
int main() {
    vector<string> strings = {"flower", "flow", "flight"};

    string longestPrefix = LongestCommonPrefix(strings);

    cout << "Longest Common Prefix: " << longestPrefix << endl;

    return 0;
}
