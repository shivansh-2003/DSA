
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
    int k=arr[0];
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
    }
    arr[n-1]=k;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}*/
/*#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}*/
#include <iostream>
#include<time.h>
#include <iomanip>
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
    int k;
    cin>>k;
    k=k%n;
    int arr2[n];
    int j=0;
    for(int i=k;i<n;i++)
    {
        arr2[j]=arr[i];
        j++;
    }
    for(int i=0;i<k;i++)
    {
        arr2[j]=arr[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    end=clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "Time taken by program is : " << fixed
             << time_taken << setprecision(5);
        cout << " sec " << endl;
}
