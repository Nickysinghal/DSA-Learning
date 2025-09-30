#include<iostream>
using namespace std;
#include<map>
#include<vector>

class solution{
public:
    int majority(vector<int> nums){
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int element = nums[i];
            if(m.find(element)==m.end()){
                m[element] = 1;
            }
            else{
                m[element]++;
            }
        }

        for(auto x:m){
            if(x.second>nums.size()/2)
            return x.first;
        }

        return -1;
    }
};

int main(){
    solution s;
    cout<<s.majority({2,3,2,1,2,2,3,5,2,2});
}