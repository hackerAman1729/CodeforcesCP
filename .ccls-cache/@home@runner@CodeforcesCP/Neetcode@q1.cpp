// NeetCode roadmap question. https://leetcode.com/problems/contains-duplicate/description/
// have to press ctrl-D after the inputs to indicate eof

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int num;

    while (cin >> num) {
        v.push_back(num);
    }

    unordered_map<int, int> freq;
    for (int i : v) {
        freq[i]++;
        if (freq[i] > 1) {
            cout << "true" << endl;
            return 0;
        }
    }

    cout << "false" << endl;
    return 0;
}

