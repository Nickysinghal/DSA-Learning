#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;

class sol{
    public:
    vector<vector<int>> threeSum(vector<int> arr){
        
        set <vector<int>> st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){

                    if(arr[i]+arr[j]+arr[k]==0){
                        vector<int> temp ={arr[i],arr[j],arr[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
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