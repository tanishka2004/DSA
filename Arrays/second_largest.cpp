class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
      if(nums.size() < 2) return -1;
      int largest = nums[0];
      int s_largest = -1;
      for(int i =0; i < nums.size(); i ++){
        if(nums[i] > largest){
            s_largest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > s_largest){
            s_largest = nums[i];
        }
       }
       return s_largest;
    }
};
// Input: nums = [8, 8, 7, 6, 5]

// Output: 7

// Explanation: The largest value in nums is 8, the second largest is 7
