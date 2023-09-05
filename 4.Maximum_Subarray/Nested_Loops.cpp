#include <iostream>
#include <vector>
#include <climits> 
using namespace std; 

class Solution {
public:
    int summ(vector<int> sum) {
        int val = 0;
        for (int i = 0; i < sum.size(); i++) {
            val = val + sum.at(i);
        }
        return val;
    }

    int maxSubArray(vector<int>& nums) {
        int max1 = INT_MIN;
        int now;
        for (int i = 0; i < nums.size(); i++) {
            now = 0;
            for (int j = i; j < nums.size(); j++) {
                now = now + nums.at(j);
                max1 = max(max1, now);
            }
        }
        return max1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSubarraySum = solution.maxSubArray(nums);

    cout << "Maximum subarray sum is: " << maxSubarraySum << endl;

    return 0;
}
