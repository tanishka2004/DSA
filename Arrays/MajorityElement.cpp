class Solution {
public:
    int majorityElement(vector<int>& nums) {
      // brutte
       for(int i  =0; i<nums.size(); i++){
        int cnt = 0;
       for(int j  =0; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                cnt++;
            }
       }
            if(cnt > nums.size()/2){
                return nums[i];
            }
       }
       return -1;
      // better
        map<int,int> mpp;
        for(int i  =0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second > nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};
// Examples:
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]

// Output: 7

// Explanation: The number 7 appears 5 times in the 9 sized array
