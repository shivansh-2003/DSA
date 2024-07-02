#include <iostream>
#include<vector>
using namespace std;
int missingNo(vector<int>&arr)
{
    int n=arr.size()+1;
    int s=(n*(n-1))/2;
    int sum=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        sum+=arr[i];
    }
    return s-sum;
}
int main()
{
    vector<int> nums = {1, 2, 3, 5};

    int m=missingNo(nums);
    
    cout<<"missing no"<<m;
    
}
