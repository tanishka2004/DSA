class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i = 0;
        for(int  j=1; j< nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
                
            }
        }
        return i+1;
    }
};
// Input: nums = [0, 0, 3, 3, 5, 6]

// Output: 4

// Explanation: Resulting array = [0, 3, 5, 6, _, _]

// There are 4 distinct elements in nums and the elements marked as _ can have any value.
