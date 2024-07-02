#include<vector>
#include <iostream>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5, 6}; // Example nums1 array
        int m = 4; // Number of elements in nums1 array
        
        vector<int> nums2 = {2, 44, 123}; // Example nums2 array
        int n = 2; // Number of elements in nums2 array
        
        merge(nums1, m, nums2, n);
        
        // Print the merged array nums1
        for (int num : nums1) {
            cout << num << " ";
        }
        cout << endl;

        return 0;

    
    
}
