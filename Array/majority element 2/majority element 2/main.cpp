#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int>majorityElement(int nums[],int n)
    {
        int sz=n;
        int num1=-1,num2=-1,count1=0,count2=0;
        for(int i=0;i<sz;i++)
        {
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
            else if(count1==0)
            {
                num1=nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                num2=nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector < int > ans;
          count1 = count2 = 0;
          for (int i = 0; i < sz; i++) {
            if (nums[i] == num1)
              count1++;
            else if (nums[i] == num2)
              count2++;
          }
          if (count1 > sz / 3)
            ans.push_back(num1);
          if (count2 > sz / 3)
            ans.push_back(num2);
          return ans;
        
    }
};
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution sol;
      vector<int> ans = sol.majorityElement(arr, n);

      cout << "The majority element(s) is/are: ";
      for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
      }
    
}
