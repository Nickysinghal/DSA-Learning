#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string largestEven(string s) {
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]%2==0){
                break;
            }else{
                s.erase(i);
            }
        }
        return s;
    }
};

int main(){
    Solution s;
    string ans;
    ans = s.largestEven("11212121");
    cout<<ans;
}