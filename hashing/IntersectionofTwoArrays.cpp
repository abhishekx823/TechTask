// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.


class Solution {
    const static int N=1e4;
    int freq[N]; 
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j] && freq[nums1[i]]==0)
                {
                    v.push_back(nums1[i]);
                    freq[nums1[i]]++;
                }
            }
        }
        return v;
    }
};
