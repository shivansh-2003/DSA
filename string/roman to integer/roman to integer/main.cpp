#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
            cout<<mp[s[i]];
        }
    }
        return ans;
    }
};
int main() {
    Solution solution;
    string romanNumeral;
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int result = solution.romanToInt(romanNumeral);
    cout << "Equivalent integer value: " << result << endl;

    return 0;
}
