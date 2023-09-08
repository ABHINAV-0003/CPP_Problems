 #include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int positive = 0;
        int negative = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                ans[negative] = nums[i];
                negative += 2;
            } else {
                ans[positive] = nums[i];
                positive += 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, -2, 3, -4, 5}; // Example input, you can change this to test other cases
    vector<int> rearranged = solution.rearrangeArray(nums);
    
    cout << "Rearranged Array: ";
    for (int num : rearranged) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
