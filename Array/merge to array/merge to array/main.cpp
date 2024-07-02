#include <iostream>
using namespace std;
void sortedMerge(int a[], int b[], int res[],
    int n, int m) // Merge two arrays in unsorted manner
  
{
    sort(<#_RandomAccessIterator __first#>, <#_RandomAccessIterator __last#>, <#_Compare __comp#>)// Sort the array a
    sort(b, b + m); // sort the array b
  
  
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) { // After the array are sorted compare and merge to third array
        if (a[i] <= b[j]) { // if element of a is less than b
            res[k] = a[i]; // put element of a into the res and increment i
            i += 1;
            k += 1;
        } else {
            res[k] = b[j]; // otherwise put the element  of b into the  res array and increment j
            j += 1;
            k += 1;
        }
    }
    while (i < n) { // If array a elements are left in the array put in res
        res[k] = a[i];
        i += 1;
        k += 1;
    }
        while (j < m) { // If array a elements are left in the array put in res
            res[k] = b[j];
            j += 1;
            k += 1;
        }
    }
      
    int main()
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int res[n + m]; // create res array to Concatenate both the array
        sortedMerge(a, b, res, n, m); // call function to append and sort
      
        cout << "The sorted array is: ";
        for (int i = 0; i < n + m; i++)
            cout << " " << res[i];
               cout << "\n";
             
               return 0;
           }
