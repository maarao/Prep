#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    static int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, longest = 0;

        // I SPENT SO LONG ON THIS WITHOUT KNOWING HOW SUBSTRING WORKED :'(
        for (int i = 0; i < s.length(); i++) {
            int duplicate = s.substr(start, end - start).find(s[i]);
            if (duplicate == -1) {
                end++;
            } else {
                if (end - start > longest) longest = end - start;
                start += duplicate + 1, end++;
            }
        }
        return max(longest, end - start); // Important to do so that the last ones can be considered
    }
};