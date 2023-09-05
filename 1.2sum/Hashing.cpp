#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int second = target - first;
            if (hash.find(second) != hash.end()) {
                return {i, hash[second]};
            }
            hash[first] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 4}; // Replace this with your input array
    int target = 6; // Replace this with your target sum

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << " are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No such pair found." << endl;
    }

    return 0;
}
