#include<iostream>
#include<vector>
using namespace std;

class solution{
public:
    vector<int> spiralOfMatrix(vector<vector<int>> nums){
        int n= nums.size();
        int m= nums[0].size();

        vector<int> ans;

        int top=0;
        int left=0;
        int bottom=n-1;
        int right=m-1;

        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++) ans.push_back(nums[top][i]);
            top++;

            for(int i=top;i<=bottom;i++) ans.push_back(nums[i][right]);
            right--;

            if (top <= bottom) {

                for(int i=right;i>=left;i--) ans.push_back(nums[bottom][i]);
                bottom--;
            }

            if(left<=right){ 
                for(int i=bottom;i>=top;i--) ans.push_back(nums[i][left]);
                left++;
            }

        }

        return ans;
    }
};

int main(){
    solution s;
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = s.spiralOfMatrix(nums);

    for(int x:ans) cout<<x<<" ";

}