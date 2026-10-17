// Find the biggest continuous segment with sum <= s
// Time = O(n)

#include <bits/stdc++.h>

using namespace std;

void two_pointers(int a[], int n, int s) {

    int l = 0;
    int sum = 0;
    int best = 0;

    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > s) {
            sum -= a[l];
            l++;
        }

        best = max(best, r-l+1);
    }

}