#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> colors = {2, 0, 1, 1, 0, 2, 1};
    
    cout << "Original array: ";
    for (int color : colors) {
        cout << color << " ";
    }
    cout << endl;

    solution.sortColors(colors);

    cout << "Sorted array: ";
    for (int color : colors) {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}
