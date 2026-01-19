#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int left=0;
        int right=num.size()-1;
        
        while(left<num.size()){
            char s = num[left];
            if(s=='0') left++;
            else break;
        }
        for(int i=num.size()-1;i>=0;i--){
            int ele = num[i]-'0';
            if(!(ele&1)) right--;
            else break;
        }

        return num.substr(left,right-left+1);
    }
};

int main(){
    Solution s;
    string ans;
    ans = s.largestOddNumber("000232324788");
    cout<<ans;
}