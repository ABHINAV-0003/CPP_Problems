#include <iostream>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> best;
        stack<int> best2;
        best2.push(INT_MIN);
        int c = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            c = prices[i];
            best.push(prices[i]);
            for (int j = i + 1; j < prices.size(); j++) {
                if (best.top() < prices[j]) {
                    best.push(prices[j]);
                }
            }
            if (best2.top() < best.top() - c) {
                best2.push(best.top() - c);
            }
        }
        return best2.top();
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input, you can change this to test other cases
    int maxProfit = solution.maxProfit(prices);
    cout << "Max Profit: " << maxProfit << endl;
    return 0;
}
