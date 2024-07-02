
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
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
   
        //fetch
        cout<<hash[number]<<endl;
    }
}*/
#include <iostream>
#include<vector>
#include<map>
using namespace std;
 
void Frequency(int arr[], int n)
{
    map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Frequency(arr, n);
}
