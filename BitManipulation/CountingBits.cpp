// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

// Do not solve it with built-in functions (i.e., like __builtin_popcount in C++).


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            int ct=0;
            for(int j=31;j>=0;j--)
            {
                if((i&(1<<j))!=0)
                    ct++;
            }   
            v.push_back(ct);
        }
        return v;
    }
};
