#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        for(int i = 0; i < spaces.size(); i++){
            s.insert(spaces[i] + i, " ");
        }

        return s;
    }
};

int main() {
    Solution obj;

    string s = "LeetCodeHelpsMeLearn";
    vector<int> spaces = {8, 13, 15};

    string ans = obj.addSpaces(s, spaces);
    cout << ans;

    return 0;
}
