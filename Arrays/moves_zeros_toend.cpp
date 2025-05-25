class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
            temp.push_back(nums[i]);
        }
    }
    int i=0;
        for(; i<temp.size(); i++){
            nums[i] = temp[i];        
            }
        for(; i<nums.size(); i++){
        nums[i] = 0;
    }
}
};
// Examples:
// Input: nums = [0, 1, 4, 0, 5, 2]

// Output: [1, 4, 5, 2, 0, 0]

// Explanation: Both the zeroes are moved to the end and the order of the other elements stay the same
