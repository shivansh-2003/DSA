#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>>generate(int numRows)
    {
        vector<vector<int>>r(numRows);
        
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
                r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
        return r;
    }
};
int main()
{
    Solution solution;
    int numRows ;
    cin>>numRows;// change this to generate more or fewer rows
    vector<vector<int>> result = solution.generate(numRows);

    // print out the triangle
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
