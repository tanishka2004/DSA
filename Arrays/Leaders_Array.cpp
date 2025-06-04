class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
    // optimal
      vector<int> ans;
     int maxi = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
       
     }
     reverse(ans.begin(), ans.end());
     return ans;
  
      // brute
vector<int> ans;
      for(int i=0; i<nums.size(); i++){
        int leader = true;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]> nums[i]){
                leader = false;
                break;
            }
        }
        if(leader==true){
            ans.push_back((nums[i]));
        }
      }
      return ans;
    }
};
// Examples:
// Input: nums = [1, 2, 5, 3, 1, 2]

// Output: [5, 3, 2]

// Explanation: 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]
