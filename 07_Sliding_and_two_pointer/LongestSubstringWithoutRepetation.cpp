#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        
        st.insert(s[0]);
        int n=s.size();
        int j=1;
        int len=1;
        int l=1;
        
        while(j<n){
            
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
                l++;

            }else{
                l=1;
                st.clear();
                st.insert(s[j]);
                j++;
            }
            len=max(len,l);
        }

        return len;
    }
};

int main(){
    Solution s;
    int ans;
    ans = s.lengthOfLongestSubstring("pwwkew");
    cout<<ans;
}