#include <iostream>
#include <string>
using namespace std;
class Solution {
    public:

bool isPalin(string& s, int l, int r) {
    while (l < r) { 
        if (s[l++] != s[r--]) return false; }
    return true;
}

string longestPalindrome(string s) {
    int n = s.size();
    string best = "";
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalin(s,i,j) && j-i+1 > (int)best.size()) {
                best = s.substr(i, j-i+1);
            }
        }
    }
    return best;
}
};

// lpsBrute("babad") → "bab"