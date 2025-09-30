#include<iostream>
#include<vector>
using namespace std;

class solution{
public:
    vector<int> twoSum(vector<int> arr,int target){
        for(int i =0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target)
                return {i,j};
        }
    }
    return {-1,-1};
    }    
};

int main(){
    vector<int> arr ={2,8,4,5,6};
    int target = 14;

    solution s;
    vector<int> ans = s.twoSum(arr,target);
    for(int x:ans){
        cout<< x<<" ";
    }

    return 0;
}