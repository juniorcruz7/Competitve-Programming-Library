#include <bits/stdc++.h>

using namespace std;

bool binary_search(int n, int x, int a[]) {
    int left = 0;
    int right = n-1;
    while (left <= right) {
        int mid = (left+right)/2;
        if (a[mid] < x) {
            left = mid+1;
        }
        else if (a[mid] > x) {
            right = mid-1;
        }
        else {
            return true;
        }
    }
    return false;
}

int main() {

    // Also has c++ implemented functions
    int n = 10;
    int v[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    bool ok = binary_search(v, v+n, 3);

    // Auto allows the program denomine itself the type
    auto ub = upper_bound(v, v+n, 3);
    auto lb = lower_bound(v, v+n, 3);

    return 0;
}