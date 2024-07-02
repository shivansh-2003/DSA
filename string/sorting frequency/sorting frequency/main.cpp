#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

string frequencySort(string s) {
    int n = s.size();
    unordered_map<char, int> m;
    
    // Count the frequency of each character
    for (int i = 0; i < n; i++)
        m[s[i]]++;
    
    string ans = "";
    vector<pair<int, char>> vx;
    
    // Store the frequency and character pairs in a vector
    for (auto it : m) {
        vx.push_back({it.second, it.first});
    }
    
    // Sort the vector in descending order based on frequency
    sort(vx.rbegin(), vx.rend());
    
    // Build the resulting string by appending characters based on their frequency
    for (auto i : vx) {
        int temp = i.first;
        while (temp--)
            ans += i.second;
    }
    
    return ans;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    string sortedString = frequencySort(input);
    
    cout << "Sorted string: " << sortedString << endl;
    
    return 0;
}

