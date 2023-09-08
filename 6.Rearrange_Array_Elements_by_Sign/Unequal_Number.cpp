#include <iostream>
#include <vector>

using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos;
    vector<int> neg;
    int index;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 0) {
            neg.push_back(a[i]);
        }
        else {
            pos.push_back(a[i]);
        }
    }
    int k = pos.size() - neg.size();
    if (k > 0) {
        for (int i = 0; i < neg.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    }
    else {
        for (int i = 0; i < pos.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}

int main() {
    vector<int> input = {1, -2, 3, -4, 5, -6}; // Example input, you can change this to test other cases

    vector<int> result = alternateNumbers(input);

    cout << "Resulting Array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

