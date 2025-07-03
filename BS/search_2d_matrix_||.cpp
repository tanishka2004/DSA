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
        for(int i = 0; i<matrix.size(); i++){
              bool flag =  binarysearch(matrix[i], target);
        if (flag) return true;
        }
        return false;
    }
};
