class Solution {
public:
    int findKRotation(vector<int> &nums) {
        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;
        int idx = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If the whole subarray is sorted
            if (nums[low] <= nums[high]) {
                if (nums[low] < ans) {
                    ans = nums[low];
                    idx = low;
                }
                break;  // Already sorted, lowest is at `low`
            }

            // Left half is sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] < ans) {
                    ans = nums[low];
                    idx = low;
                }
                low = mid + 1;
            }
            // Right half is unsorted (contains minimum)
            else {
                if (nums[mid] < ans) {
                    ans = nums[mid];
                    idx = mid;
                }
                high = mid - 1;
            }
        }

        return idx;
    }
};
