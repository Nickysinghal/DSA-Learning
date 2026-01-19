#include<iostream>
#include<stack>
#include<string>
using namespace std;


class Solution {
public:
    string removeOuterParentheses(string s) {

        /*
        //O(N) space and TC
        stack<char> st;
        string ans="";
        for(char ch:s){
            if(ch=='('){
                
                if(!st.empty()){
                    ans.push_back(ch);
                }
                st.push(ch);
            }else if(ch==')'){
                
                st.pop();

                if(!st.empty()){
                    
                    ans.push_back(ch);
                }

            }else{
                ans.push_back(ch);
            }
        }
        return ans;
        */
        int counter =0;
        string ans="";
        for(char ch:s){
            
            if(ch=='('){
                if(counter!=0) ans.push_back(ch);
                counter++;
            } 
            else{
                counter--;
                if(counter!=0) ans.push_back(ch);
            } 
        }
        return ans;
    }
};

int main(){
    Solution s;
    string ans;
    ans = s.removeOuterParentheses("((()))()(())");
    cout<<ans;
}