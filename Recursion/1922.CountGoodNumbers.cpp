#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int mod = 1e9 + 7;
    int helper(int x, long long y){
        if(y == 0)
            return 1;
        int tmp = helper(x, y / 2);
        if(y & 1)
            return ((long long)tmp * tmp * x) % mod;
        else
            return ((long long)tmp * tmp) % mod;
        return 1;
    }

    int countGoodNumbers(long long n) {
        return ((long long)helper(5, n  / 2+(n%2)) * helper(4, n / 2)) % mod;
    }
};