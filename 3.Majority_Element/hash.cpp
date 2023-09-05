#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::map<int, int> hash;
        int i;
        for (i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        for (i = 0; i < nums.size(); i++) {
            if (hash[nums[i]] > (nums.size() / 2)) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int majority = solution.majorityElement(nums);

    if (majority != -1) {
        std::cout << "The majority element is: " << majority << std::endl;
    } else {
        std::cout << "There is no majority element." << std::endl;
    }

    return 0;
}
