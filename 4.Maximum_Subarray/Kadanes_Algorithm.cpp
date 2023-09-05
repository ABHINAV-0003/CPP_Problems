#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            if (sum > max) {
                max = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return max;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSubarraySum = solution.maxSubArray(nums);

    cout << "Maximum subarray sum is: " << maxSubarraySum << endl;

    return 0;
}
