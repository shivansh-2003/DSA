

#include <iostream>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{
    clock_t start,end;
    start=clock();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    end=clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "Time taken by program is : " << fixed
             << time_taken << setprecision(9);
        cout << " sec " << endl;
}
