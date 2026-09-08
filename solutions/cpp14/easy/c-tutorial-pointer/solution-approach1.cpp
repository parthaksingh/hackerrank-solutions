// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp14
// Status      Accepted
// Submitted   2026-09-09, 01:19 a.m.
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
