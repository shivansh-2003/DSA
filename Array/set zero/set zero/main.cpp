/*#include<iostream>
#include<vector>


using namespace std;

void setZeroes(vector < vector < int >> & matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {

        int ind = i - 1;
        while (ind >= 0) {
          if (matrix[ind][j] != 0) {
            matrix[ind][j] = -1;
          }
          ind--;
        }
        ind = i + 1;
        while (ind < rows) {
          if (matrix[ind][j] != 0) {
            matrix[ind][j] = -1;
          }
          ind++;
        }
        ind = j - 1;
        while (ind >= 0) {
          if (matrix[i][ind] != 0) {
            matrix[i][ind] = -1;

          }
          ind--;
        }
        ind = j + 1;
        while (ind < cols) {
          if (matrix[i][ind] != 0) {
            matrix[i][ind] = -1;

          }
          ind++;
        }
      }
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] <= 0) {
        matrix[i][j] = 0;
      }
    }
  }

}

int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout << "The Final Matrix is " << endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}*/
#include<iostream>
#include<vector>


using namespace std;

void setZeroes(vector < vector < int >> & arr) {
    int n = arr.size(), m = arr[0].size();
    int col=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                arr[i][0]=0;
                if(j!=0)
                    arr[0][j]=0;
                else
                    col=0;
                  
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(arr[i][j]!=0)
            {
                if(arr[i][0]==0||arr[0][j]==0)
                {
                    arr[i][j]=0;
                }
            }
        }
    }
    if(arr[0][0]==0)
    {
        for(int j=0;j<m;j++)
        {
            arr[0][j]=0;
        }
    }
    if(col==0)
    {
        for(int i=0;i<n;i++)
        {
            arr[i][0]=0;
        }
    }
    
}
int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout << "The Final Matrix is " << endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}

