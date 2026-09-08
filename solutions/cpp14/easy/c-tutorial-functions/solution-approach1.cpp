// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp14
// Status      Accepted
// Submitted   2026-09-09, 01:10 a.m.
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
