#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

class solution{
public:
    int longestConsecutiveSeq(vector<int> nums){
        int n = nums.size();
        unordered_set<int> st(n);
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int longest=1;
        for(int i=0;i<n;i++){
            int curr =1;
            int element=nums[i];
            while(st.find(element+1)!=st.end()){
                curr++;
                element++;

            }
            longest=max(longest,curr);
        }      
        return longest;
    }
};

int main(){
    solution s;

    vector<int> nums={100, 200, 1, 3, 2, 4};
    vector<int> num2={3, 8,5, 7, 2,1,0,7,1,2,3,4};
    cout<< s.longestConsecutiveSeq(nums);
}