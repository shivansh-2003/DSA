#include <cstring>
#include <iostream>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int freq1[26] = {0}, freq2[26] = {0};

    for (int i = 0; input1[i] != '\0'; i++)
    {
        freq1[input1[i] - 'a']++;
    }
    for (int i = 0; input2[i] != '\0'; i++)
    {
        freq2[input2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    char a1[1000];
    cin>>a1;
    char a2[1000];
    cin>>a2;
    cout << (isPermutation(a1, a2) ? "true" : "false");
}
