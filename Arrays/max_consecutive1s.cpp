class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                cnt ++;
                maxi= max(maxi, cnt);
            }
            else{
                cnt = 0;
            }
            

        }
        return maxi;
    }
};
// Examples:
// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]

// Output: 3

// Explanation: The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s
