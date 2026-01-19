#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

//not a correct solution but tryinh some logic
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        arr[0][0]=1;

        for(int i=1;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                    arr[i][j]=1;
                else{
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }    

            }
        }
        return arr;
    }
};

int main(){
    Solution s;
    vector<vector<int>> ans = s.generate(5);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<i;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}