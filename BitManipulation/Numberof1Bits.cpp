// Given a positive integer n, write a function that returns the number of set bits in its binary representation


class Solution {
public:
    int hammingWeight(int n) {
        int ct=0;
        for(int i=31;i>=0;i--)
        {
            if((n&(1<<i))!=0)
            {
                ct++;
            }
        }
        return ct;
    }
};
