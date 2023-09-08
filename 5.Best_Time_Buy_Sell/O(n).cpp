#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int minprice = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            minprice = min(minprice, prices[i]);
            maxpro = max(maxpro, prices[i] - minprice);
        }
        return maxpro;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input, you can change this to test other cases
    int maxProfit = solution.maxProfit(prices);
    cout << "Max Profit: " << maxProfit << endl;
    return 0;
}
