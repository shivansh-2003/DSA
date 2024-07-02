#include <iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>res,store;
        store=nums;

        sort(store.begin(),store.end());

        int left=0,right=nums.size()-1;

        int n1,n2;

        while(left<right)
        {
            if(store[left]+store[right]==target)
            {
                n1=store[left];
                n2=store[right];
                break;
            }
            else if(store[left]+store[right]>target)
                right--;
            else
                left++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==n1)
            res.emplace_back(i);
            else if(nums[i]==n2)
            res.emplace_back(i);
        }
        return res;
    }
int main()
{
    vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 9; // Example target

    vector<int> result = twoSum(nums, target);

    // Print the indices of the two numbers that add up to the target
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

