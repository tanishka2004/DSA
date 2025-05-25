class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
           int n = nums.size();
           if(n==0) return;
        k= k% n; // handle k>n
        vector<int> temp(nums.begin(), nums.begin() + k); //store first k elements
        //    shifting
           for(int i=k; i<n; i++){
            nums[i -k] = nums[i];
           }
        //  put back temp
        for(int i=0; i<k; i++){
            nums[n - k + i] = temp[i];

        }

    }
};
// Examples:
// Input: nums = [1, 2, 3, 4, 5, 6], k = 2

// Output: nums = [3, 4, 5, 6, 1, 2]

// Explanation: rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]
