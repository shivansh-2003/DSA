/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int maxLength=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
                maxLength=max(maxLength,j-i+1);
        }
    }
    cout<<maxLength;
}*/
#include <iostream>
#include <vector>

void printAllSubarrays(const std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Print subarray arr[i:j+1]
            std::cout << "[";
            for (int k = i; k <= j; ++k) {
                std::cout << arr[k];
                if (k < j) {
                    std::cout << ", ";
                }
            }
            std::cout << "]" << std::endl;
        }
    }
}

int main() {
    // Example
    std::vector<int> arr = {1, 2, 3, 4};
    printAllSubarrays(arr);

    return 0;
}
