//optimal  approach 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int pos_index = 0, neg_index =1;
        for(int i =0; i<n; i++){
            if(nums[i]<0){
                ans[neg_index] = nums[i];
                neg_index += 2;
            }
            else{
                ans[pos_index] = nums[i];
                pos_index += 2;
            } 
        }
            return ans;       
            
    }
};

// brute approach
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i= 0; i<nums.size(); i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i = 0; i<pos.size(); i++){
             ans.push_back(pos[i]);
            ans.push_back(neg[i]);
                  
             }
             return ans;
    }
};

// Examples:
// Input : nums = [2, 4, 5, -1, -3, -4]

// Output : [2, -1, 4, -3, 5, -4]

// Explanation: The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions

// Input : nums = [1, -1, -3, -4, 2, 3]

// Output : [1, -1, 2, -3, 3, -4]

// Explanation: The positive number 1, 2, 3 maintain their relative positions and -1, -3, -4 maintain their relative positions
