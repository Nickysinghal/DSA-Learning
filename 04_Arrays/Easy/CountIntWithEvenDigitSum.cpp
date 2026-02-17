#include<iostream>
using namespace std;

class Solution {
public:
    int sumDigit(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int countEven(int num) {
        int ans =0;
        for(int i=1;i<=num;i++){
            if(sumDigit(i)%2==0) ans++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<< s.countEven(4);
}