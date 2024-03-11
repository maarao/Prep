#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        cout << isPalindrome(s) << endl;
        return "";
    }

    static bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != s[s.length() - 1 - i]) return false;
        }
        return true;
    }
};