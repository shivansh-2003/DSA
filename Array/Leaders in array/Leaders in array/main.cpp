#include<iostream>

using namespace std;

void printLeadersOptimal(int arr[], int n) {
  //Choosing the right most element as the maximum
  int max = arr[n - 1];
  cout << arr[n - 1] << " ";

  for (int i = n - 2; i >= 0; i--)
    if (arr[i] > max) {
      cout << arr[i] << " ";
      max = arr[i];
    }

  cout << "\n";
}

int main() {

  int arr1[] = {4, 7, 1, 0};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  cout << "The leaders of the first array are: " << endl;
  printLeadersOptimal(arr1, n1);

  int arr2[] = {10, 22, 12, 3, 0, 6};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  cout << "The leaders of the second array are: " << endl;
  printLeadersOptimal(arr2, n2);

  return 0;
}
