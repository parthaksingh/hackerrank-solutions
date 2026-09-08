// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp14
// Status      Accepted
// Submitted   2026-09-09, 01:19 a.m.
// Technique   pointer-dereference-arithmetic
// Time        O(1)
// Space       O(1)
// Insight     The function uses a temporary variable to store the initial value of the first pointer before updating both memory locations with their sum and absolute difference.
// Interview   Before: "How do you modify two variables in a function without returning a pair?" After: "By passing pointers, we can directly update memory addresses in O(1) time, ensuring the first pointer holds the sum and the second holds the absolute difference using a temporary variable to avoid data loss."
// Pitfalls    (1) Failing to store the initial value of *a in a temporary variable causes the second calculation to use the already-updated sum instead of the original value.  (2) Neglecting to calculate the absolute difference correctly by checking if the result is negative leads to incorrect output for cases where b is greater than a.
// ──────────────────────────────────────────────────

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
   int x = *a;

    int y = *b;

    *a = x + y;

    *b = x - y;

    if(*b < 0)

        *b = -*b;
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
