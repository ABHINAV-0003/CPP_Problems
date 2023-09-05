#include <iostream>
#include <vector>

using namespace std; 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0;
       int element;
       for (int i = 0; i < nums.size(); i++) {
           if (count == 0) {
               element = nums[i];
           } else if (nums[i] == element) {
               count++;
           } else {
               count--;
           }
       }
       return element;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int majority = solution.majorityElement(nums);

    cout << "The majority element is: " << majority << endl;

    return 0;
}
