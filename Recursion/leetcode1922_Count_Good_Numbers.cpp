// Problem: https://leetcode.com/problems/count-good-numbers/
// Daily LeetCode Question - 2025-04-13
// Solution by: Amr Khaled
// Tags: Math, Fast Exponentiation, Modular Arithmetic

#include <iostream>
using namespace std;

class Solution {
    int mod = 1e9 + 7;
public:
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long res = (fp(5, even) % mod * fp(4, odd) % mod) % mod;
        return res;
    }

    long long fp(long long a, long long b) {
        if (b == 0) return 1;
        long long p = fp(a, b >> 1);
        return (b & 1) ? ((a % mod) * ((p % mod) * (p % mod) % mod) % mod) % mod
                       : ((p % mod) * (p % mod) % mod);
    }
};
