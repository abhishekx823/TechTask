// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output


class Solution {
    const static int N=1e5+10;
    int freq[N];
    int freq2[N];
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]>1 && freq2[nums[i]]==0)
            {
                v.push_back(nums[i]);
                freq2[nums[i]]++;
            }
        }
        return v;
    }
};
