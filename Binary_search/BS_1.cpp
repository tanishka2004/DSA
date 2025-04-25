class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};

// Example 1:

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
