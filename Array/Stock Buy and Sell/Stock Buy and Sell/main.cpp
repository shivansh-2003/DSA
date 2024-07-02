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
    int buy=arr[0],pos=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<buy)
        {
            buy=arr[i];
            pos=i;
        }
    }
    cout<<buy<<endl;
    int sell=buy;
    for(int i=pos;i<n;i++)
    {
        if(arr[i]>sell)
            sell=arr[i];
    }
    cout<<sell<<endl;
    cout<<sell-buy;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
          }
        }
      }

    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}*/
#include<iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}
