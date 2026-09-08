// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Problem     For Loop
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-09, 01:07 a.m.
// Technique   iterative-conditional-range-mapping
// Time        O(b - a)
// Space       O(1)
// Insight     The implementation iterates through the inclusive range [a, b] and applies conditional logic to map integers 1-9 to their English names while classifying integers greater than 9 based on parity.
// Interview   Before: "How would you handle mapping integers to strings and parity checks in a loop?" After: "I used a simple for loop from a to b with if-else blocks. This runs in O(b - a) time and O(1) space, correctly handling the inclusive range requirement."
// Pitfalls    (1) Failing to include the upper bound b in the loop condition, which violates the inclusive interval requirement.  (2) Incorrectly ordering the conditional checks, which would cause numbers greater than 9 to be misidentified as English words.  (3) Using an incorrect parity check for numbers greater than 9, failing to distinguish between even and odd values as specified.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin>> a>>b;
    
    for(int i = a; i <= b; i++){
        if(i == 1)
            cout << "one" << endl;
        else if(i == 2)
            cout << "two" << endl;
        else if(i == 3)
            cout << "three" << endl;
        else if(i == 4)
            cout << "four" << endl;
        else if(i == 5)
            cout << "five" << endl;
        else if(i == 6)
            cout << "six" << endl;
        else if(i == 7)
            cout << "seven" << endl;
        else if(i == 8)
            cout << "eight" << endl;
        else if(i == 9)
            cout << "nine" << endl;
        else {
            if(i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
        }
    
    // Complete the code.
    return 0;
}
