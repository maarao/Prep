#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*vector<int> sol;
        for (int i = 0; i < nums.size() - 1 && sol.empty(); i++) {
            for (int j = i + 1; j < nums.size() && sol.empty(); j++) {
                if (nums[i] + nums[j] == target) {
                    sol.push_back(i);
                    sol.push_back(j);
                }
            }
        }
        return sol;*/

        vector<int> sol;
        map<int, int> complementCheck;
        for (int i = 0; i < nums.size(); i++) {
            complementCheck.insert({nums[i], i});
        }

        for (int i = 0; i < nums.size() && sol.empty(); i++) {
            if (complementCheck.count(target - nums[i]) && i != complementCheck[target - nums[i]]) {
                sol.push_back(i);
                sol.push_back(complementCheck[target - nums[i]]);
            }

        }
        return sol;

    }
};