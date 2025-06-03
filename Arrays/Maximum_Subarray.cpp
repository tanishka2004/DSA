#include <vector>
#include <climits> // For INT_MIN
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // optimal
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
             return maxi;  
        // brute

        int maxi = nums[0];
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j<nums.size(); j++){
               sum += nums[j];
                maxi = max(maxi, sum);
            } 
            }
          return maxi;  
    }
        };
    
// Examples:
// Input: nums = [2, 3, 5, -2, 7, -4]

// Output: 15

// Explanation: The subarray from index 0 to index 4 has the largest sum = 15
