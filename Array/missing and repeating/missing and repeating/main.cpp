
#include <vector>
#include <iostream>
using namespace std;
vector<int>missing_repeated_number(const vector<int> &A) {
    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector<int>ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    return ans;
}
int main(void){
        std::vector<int> v = {4, 3, 6, 2, 1, 6,7};
    vector<int> res = missing_repeated_number(v);
    for(int x: res){
        cout<< x<<"  ";
    }
    cout<<endl;
}
