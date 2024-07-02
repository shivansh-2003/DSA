#include <iostream>
#include <vector>
using namespace std;
void findSubsequences( vector<int>& nums, int target, int index, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);  // Found a subsequence with the sum equal to K
        return;
    }
    if (index >= nums.size() || target < 0) {
        return;
    }
    // Include the current element
    current.push_back(nums[index]);
    findSubsequences(nums, target - nums[index], index + 1, current, result);
    // Exclude the current element
    current.pop_back();
    findSubsequences(nums, target, index + 1, current, result);
}

vector<vector<int>> findSubsequencesWithSumK( vector<int>& nums, int target) {
  vector<vector<int>> result;
   vector<int> current;
    findSubsequences(nums, target, 0, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target ;
    cin>>target;

    vector<vector<int>> subsequences = findSubsequencesWithSumK(nums, target);

    // Print the found subsequences
    for ( auto& subsequence : subsequences) {
        for (int num : subsequence) {
         cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

