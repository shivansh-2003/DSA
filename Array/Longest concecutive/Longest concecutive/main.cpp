#include <iostream>
#include <set>
#include <vector>
using namespace std;
int longestConcecutive(vector<int>&nums)
{
    set<int>hashSet;
    for(int num:nums)
    {
        hashSet.insert(num);
    }
    int longestStreak=0;
    for (int num: nums)
    {
        if (!hashSet.count(num - 1))
        {
          int currentNum = num;
          int currentStreak = 1;

          while (hashSet.count(currentNum + 1))
          {
            currentNum += 1;
            currentStreak += 1;
          }

          longestStreak = max(longestStreak, currentStreak);
    }
}
int main()
{
    vector<int>num;
   int ans= longestConcecutive(vector<int>&num);
}
