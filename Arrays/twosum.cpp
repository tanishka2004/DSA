class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    if(i<j)
                        return{i,j};   
                   else
                         return{j,i};
                }
            }
        }
        return {};
    }
    
};
// Examples:
// Input: nums = [1, 6, 2, 10, 3], target = 7

// Output: [0, 1]

// Explanation: nums[0] + nums[1] = 1 + 6 = 7
