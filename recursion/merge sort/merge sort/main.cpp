
#include <iostream>
using namespace std;
void mergesort(int input[], int size, int mid)
{

   
    int n1 = mid + 1;
    int n2 = size - mid - 1;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = input[i];
    for (int j = 0; j < n2; j++)
        M[j] = input[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            input[k] = L[i];
            i++;
        }
        else
        {
            input[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        input[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        input[k] = M[j];
        j++;
        k++;
    }
}



void mergeSort(int input[], int size)
{
    int si=0;
    int ei=size-1;
    int mid = (si + ei) / 2;
    if (si >= ei)
    {
      return;
    } else {
      mergeSort(input, mid + 1);
      mergeSort(input + mid + 1, size - mid - 1);
      mergesort(input, size, mid);
    }
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
    
}
