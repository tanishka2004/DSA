// optimal
bool binarysearch(vector<int> &nums, int target){
  int low = 0, high = nums.size() - 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            return true;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int n = matrix.size();
          int m = matrix[0].size();
        for(int i = 0; i<matrix.size(); i++){
            if(matrix[i][0] <= target && target <= matrix[i][m - 1]){
                return binarysearch(matrix[i], target);
            }
        }
        return false;
    }
};

// brute
for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
            return false;
        }
        return 0;
