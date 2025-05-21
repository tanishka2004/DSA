class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
            if(nums.size()<=1){
                return nums;
            }
      // Step 1: Choose pivot (first element)
            int pivot = nums[0];
      // Step 2: Partition into left (<= pivot) and right (> pivot)
     vector<int> left,right;
     for(int i = 1; i<nums.size(); i++){
        if(nums[i]<= pivot)
        left.push_back(nums[i]);
        else
        right.push_back(nums[i]);
     }
      // Step 3: Recursively sort left and right
     left = quickSort(left);
     right = quickSort(right);
      // Step 4: Combine left + pivot + right
     vector<int> sorted;
     sorted.insert(sorted.end(), left.begin(), left.end());
     sorted.push_back(pivot);
     sorted.insert(sorted.end(), right.begin(), right.end());
     return sorted;
    }
};
