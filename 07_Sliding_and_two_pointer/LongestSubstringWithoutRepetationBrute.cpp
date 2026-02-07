#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        int n=s.size();
        int len=0;

        for(int i=0;i<n;i++){
            unordered_set<char> st;
            for(int j=i;j<n;j++){
                st.insert(s[j]);

                int size = st.size();
                if(size==j+1-i){
                    len=max(size,len);

                }else{
                    break;
                }
            }
        }
        

        return len;
    }
};

int main(){
    Solution s;
    int ans;
    // ans = s.lengthOfLongestSubstring("");
    // ans = s.lengthOfLongestSubstring("dvdf");
    ans = s.lengthOfLongestSubstring("abcdadsdfwc");
    cout<<ans;
}