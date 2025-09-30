#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    vector<int> leaders(vector<int> nums){
        int n = nums.size();
        int leader = nums[n-1];
        vector<int> ans;
        ans.insert(ans.begin(),leader);
        for(int i=n-1;i>=0;i--){
            if(nums[i]>leader){
                leader=nums[i];
                ans.insert(ans.begin(),leader);
            }
        }
        return ans;
    }
};

int main(){
    solution s;
    vector<int> nums={10, 22, 12, 3, 0, 6};
    vector<int> ans = s.leaders(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
}