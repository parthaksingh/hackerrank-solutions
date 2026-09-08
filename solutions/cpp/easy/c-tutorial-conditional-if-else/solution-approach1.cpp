// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true
// Problem     Conditional Statements
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-09, 01:00 a.m.
// Technique   if-else-if-chain
// Time        O(1)
// Space       O(1)
// Insight     The implementation uses a sequential conditional chain to map integers one through nine to their English word equivalents, defaulting to a specific string for any integer greater than nine.
// Interview   Before: "I would use a switch statement or an array lookup for this mapping." After: "Using an if-else-if chain provides O(1) time complexity and is sufficient given the small, fixed range of inputs defined in the problem statement."
// Pitfalls    (1) Failing to handle the 'Greater than 9' case correctly by omitting the final else block.  (2) Using incorrect spelling for the English words, which would cause a mismatch with the required output format.  (3) Assuming the input could be non-positive, although the problem statement explicitly defines n as a positive integer.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if(n == 1){
        cout<<"one"<<endl;
    }else if(n == 2){
        cout<<"two"<<endl;
    }else if(n == 3){
        cout<<"three"<<endl;
    }else if(n == 4){
        cout<<"four"<<endl;
    }else if(n == 5){
        cout<<"five"<<endl;
    }else if(n == 6){
        cout<<"six"<<endl;
    }else if(n == 7){
        cout<<"seven"<<endl;
    }else if(n == 8){
        cout<<"eight"<<endl;
    }else if(n == 9){
        cout<<"nine"<<endl;
    }else{
        cout<<"Greater than 9"<<endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
