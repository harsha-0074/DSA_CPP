#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 1, 1, 3};

    unordered_map<int, vector<int>> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }

    // Print (for understanding)
    for (auto &p : mp) {
        cout << p.first << " -> ";
        for (int idx : p.second) {
            cout << idx << " ";
        }
        cout << endl;
    }

    int ans = INT_MAX;

for (auto &p : mp) {
    vector<int> &indices = p.second;

    if (indices.size() < 3) continue;

    for (int i = 0; i <= indices.size() - 3; i++) {
        int left = indices[i];
        int right = indices[i + 2];

        ans = min(ans, 2 * (right - left));
    }
}

if (ans == INT_MAX) cout << -1;
else cout << ans;

    return 0;
}