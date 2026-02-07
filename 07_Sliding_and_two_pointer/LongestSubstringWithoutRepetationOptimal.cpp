#include<iostream>
#include<unordered_set>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len=1;
        if(s=="") return 0;

        int n=s.size();
        unordered_map<char,int> mp;
        int r=0;
        int l=0;
        for (int r = 0; r < s.size(); r++) {
            // if character seen and inside current window
            if (mp.find(s[r]) != mp.end() && mp[s[r]] >= l) {
                l = mp[s[r]] + 1;
            }

            mp[s[r]] = r;  // update last index
            len = max(len, r - l + 1);
        }   
        

        return len;
    }
};

int main(){
    Solution s;
    int ans;
    // ans = s.lengthOfLongestSubstring("");
    ans = s.lengthOfLongestSubstring("dvdf");
    // ans = s.lengthOfLongestSubstring("abcdadsdfwc");
    cout<<ans;
}