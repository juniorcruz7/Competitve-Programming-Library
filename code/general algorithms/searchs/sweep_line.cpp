#include <bits/stdc++.h>
using namespace std;

// Sweep Line + Prefix Sum
// Counts how many intervals [l, r] contain each point x.
// Time Complexity: O(n + MAXN + q)
// Space Complexity: O(MAXN)

const int MAXN = 1000000;

int main() {


    int n;
    cin >> n;

    vector<int> contador(MAXN + 2, 0);
    vector<int> prefixsum(MAXN + 1, 0);

    // Read intervals and mark their boundaries
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        contador[l]++;
        contador[r + 1]--;
    }

    // Build prefix sum
    for (int i  = 1; i <= MAXN; i++) {
        prefixsum[i] = contador[i] + prefixsum[i - 1];
    }

    // Answer point queries
    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        cout << prefixsum[x] << '\n';
    }

    return 0;
}