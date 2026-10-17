// Complexity: O(N!)

#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {1, 2, 3};
    sort(v.begin(), v.end());

    do {
        for (auto e : v) cout << e << ' ';
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));


    return 0;
}