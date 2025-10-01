#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

class solution{
public:
    
    int longestConsecutiveSeq(vector<int> nums){
        int n=nums.size();
        unordered_set<int> st(n);
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        int lar=1;
        for(auto i: st){
            if(st.find(i-1)==st.end()){
                int element = i;
                int count=1;
                while(st.find(element+1)!=st.end()){
                    count++;
                    element++;
                }
                lar = max(lar,count);

            }
        }
        return lar;
    }
};

int main(){
    solution s;

    vector<int> nums={100, 200, 1, 3, 2, 4};
    vector<int> num2={3, 8,5, 7, 2,1,0,7,1,2,3,4};
    cout<< s.longestConsecutiveSeq(nums);
}