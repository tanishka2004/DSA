class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n - 1; i++) {
            int mini = i; 
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }
            swap(nums[i], nums[mini]);
        }

        return nums;
    }
};

// Input: nums = [7, 4, 1, 5, 3]

// Output: [1, 3, 4, 5, 7]

// Explanation: 1 <= 3 <= 4 <= 5 <= 7.

// Thus the array is sorted in non-decreasing order.
