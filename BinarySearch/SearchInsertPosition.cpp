// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid;
        while(h-l>1)
        {
            mid=(h-l)/2+l;
            if(nums[mid]<target)
                l=mid;
            else 
                h=mid;
        }
        if(target<=nums[l])
            return l;
        if(target<=nums[h])
            return h;
        return h+1;
    }
};
