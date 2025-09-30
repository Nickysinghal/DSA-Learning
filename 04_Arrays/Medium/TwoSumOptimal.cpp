#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr ={1,5,0,2,6,7};
    int target = 14;
    int left = 0;
    int right= arr.size()-1;

    while(left<right){
        int sum = arr[left]+arr[right];

        if(sum==target){
            cout<<"yes";
            break;
        }
        else if(sum<target) left++;
        else right--;
    }
    cout<<"no";
}
