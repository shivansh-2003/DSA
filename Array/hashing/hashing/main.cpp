
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
    return 0;
}*/
//if the array is declared globally it can store more data
/*#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    int hash[256]={0};
    for(int i=0;i<s.size;i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
    }
}*/
#include <iostream>
#include<map>
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
    map<int ,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
  /*  for(auto it : mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }*/
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    
}
