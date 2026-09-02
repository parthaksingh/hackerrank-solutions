// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true
// Problem     Mini-Max Sum
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-03, 02:30 a.m.
// Technique   sorting-and-linear-summation
// Time        O(N log N)
// Space       O(1)
// Insight     The minimum sum is obtained by excluding the largest element, while the maximum sum is obtained by excluding the smallest element after sorting the array.
// Interview   Before: "I would iterate through the array five times to find each subset sum." After: "Sorting the array allows us to identify the min and max elements in O(N log N) time, ensuring we handle the 64-bit integer requirement for the sums correctly."
// Pitfalls    (1) Failing to use long long for sum variables, which causes integer overflow given the constraints.  (2) Assuming the input array is already sorted, which leads to incorrect min and max calculations.  (3) Incorrectly indexing the loops, which results in summing the wrong number of elements.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    int n = arr.size();
    long long maxSum = 0;
    long long minSum = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n -1; i++){
        minSum += arr[i];
    }
    for(int i = 1; i < n; i++){
        maxSum += arr[i];
    }
    cout<<minSum<<" "<<maxSum;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
