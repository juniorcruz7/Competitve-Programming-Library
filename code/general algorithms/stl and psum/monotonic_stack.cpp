#include <bits/stdc++.h>
using namespace std;

// Previous Smaller Element (PSE)
// left[i] = index of the nearest element to the left
// that is strictly smaller than a[i].
// Returns -1 if no such element exists.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> smallestLeft(const vector<int>& a) {
    int n = a.size();

    vector<int> left(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }

        if (!st.empty()) {
            left[i] = st.top();
        }

        st.push(i);
    }

    return left;
}

int main() {
    vector<int> a = {4, 2, 5, 3, 6};

    vector<int> left = smallestLeft(a);

    for (int i = 0; i < (int)left.size(); i++) {
        cout << left[i] << " ";
    }
    cout << '\n';

    return 0;
}