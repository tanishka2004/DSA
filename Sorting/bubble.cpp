class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            // After each pass, the largest element moves to the end
            for (int j = 0; j < n - 1 - i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
    }
};

// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]
// Explanation: 1 <= 3 <= 4 <= 5 <= 7.
// Thus the array is sorted in non-decreasing order.
