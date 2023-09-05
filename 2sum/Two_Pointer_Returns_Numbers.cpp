#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return {left, right};
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
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
