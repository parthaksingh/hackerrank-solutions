// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp14
// Status      Accepted
// Submitted   2026-09-09, 01:10 a.m.
// Technique   nested-max-function-calls
// Time        O(1)
// Space       O(1)
// Insight     The implementation determines the maximum of four integers by nesting three calls to the standard library max function.
// Interview   Before: "How would you find the maximum of four integers?" After: "I used nested max calls to compare the values, which runs in O(1) time and O(1) space, effectively handling the four input integers provided by the problem."
// Pitfalls    (1) Failing to include the necessary header for the max function.  (2) Assuming the max function accepts more than two arguments in standard C++.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    int ans = max(a, max(b, max(c, d)));
    cout << ans<<endl;
    return 0;
}
