#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    for (int mask = 0; mask < (1 << n); mask++) {
        for (int bit = 0; bit < n; bit++) {
            if (mask & (1 << (bit))) {
                // Bit is in the subset
            }
        }
    }

    return 0;
}