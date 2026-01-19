#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
#include<map>
using namespace std;
class sol{
    public:
    vector<vector<int>> threeSum(vector<int> arr){        
        set <vector<int>> st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            map<int,int> mp;
            for(int j=i+1;j<n;j++){
                int more = -(arr[i]+arr[j]);
                if(mp.find(more)!=mp.end()){
                    vector<int> temp ={arr[i],arr[j],more};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                mp[arr[j]]=j;
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }


    //can use set instead of map
     vector<vector<int>> threeSum2(vector<int>& nums) {
        set <vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> hashset;
            for(int j=i+1;j<n;j++){
                int more = -(nums[i]+nums[j]);
                if(hashset.find(more)!=hashset.end()){
                    vector<int> temp ={nums[i],nums[j],more};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

int main(){
    sol st;
    vector<int> arr ={-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    ans = st.threeSum(arr);
    for(auto ar:ans){
        for(auto x:ar)
        cout<<x<<" ";
        cout<<endl;
    }
}