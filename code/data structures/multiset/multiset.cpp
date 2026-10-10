// The multiset stucture allow to store elements automatically sorted (multiple elements)
// It is good to always have the minimum or the maximum value of a set (with repetition)

#include <bits/stdc++.h>

using namespace std;

int main() {

    // Declare
    multiset<int> ms;

    // Insert
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    // Find the first ocurrency
    ms.find(5);

    // Remove one ocurrency
    ms.erase(ms.find(5));

    // Remove all ocurrency
    ms.erase(5);

    // First and Last
    *ms.begin();
    *ms.rbegin();

    // Bounds

    ms.lower_bound(20);
    ms.upper_bound(20);


    return 0;
}