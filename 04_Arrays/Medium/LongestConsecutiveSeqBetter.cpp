#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

class solution{
public:
    // Partition function
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high]; // choosing last element as pivot
        int i = low - 1;       // index of smaller element

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]); // place pivot in correct position
        return i + 1;
    }

    // QuickSort function
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high); // partition index

            quickSort(arr, low, pi - 1);  // sort left part
            quickSort(arr, pi + 1, high); // sort right part
        }
    }



    int longestConsecutiveSeq(vector<int> nums){
        int n = nums.size();
        quickSort(nums,0,nums.size());

        int small= INT_MIN;
        int count =1;
        int lar = 1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==small+1){
                small++;
                count++;
            }
            if(nums[i]>small){
                small=nums[i];
                count=1;
            }
            lar = max(lar,count);
        }
        return lar;
    }
};

int main(){
    solution s;

    vector<int> nums={100, 200, 1, 3, 2, 4};
    vector<int> num2={3, 8,5, 7, 2,1,0,7,1,2,3,4};
    vector<int> num3 ={2,4,1,2,5,1,7,8,9,7};
    cout<< s.longestConsecutiveSeq(num3);
}