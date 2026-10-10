// You create the prefix sum array to sum all the elements until de position i (i going from 1 to n)
// Then, if yout want to discover any subarray sum, you only do the p_sum[j] (final) - p_sum[i-1] (Initial/everything we don't want)

// Complexity: O(n)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int p_sum[10];

    int sum_a = 0;
    
    for (int i = 0; i < 10; i++) {
        sum_a += array[i];
        p_sum[i] = sum_a;
    }

    // What is the sum of all numbers from 5 to 9?
    cout << p_sum[8] - p_sum[3] << endl;

    // What is the sum of all numbers from 3 to 5?
    cout << p_sum[4] - p_sum[1] << endl;


    return 0;
}