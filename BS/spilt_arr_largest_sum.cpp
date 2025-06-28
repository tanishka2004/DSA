int cnt_sum(vector<int> &nums, int max_sum){
    int n = nums.size();
    int partitions = 1;
    int sum_subarr = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] + sum_subarr <= max_sum){
            sum_subarr += nums[i];
        }
        else{
            partitions++;
            sum_subarr = nums[i];
        }
    }
    return partitions;
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
      if(nums.size() < k) return -1;
      int low = *max_element(nums.begin(), nums.end());
      int high = accumulate(nums.begin(), nums.end(), 0);
      int ans = -1;
      while(low<=high){
        int mid = (low + high)/2;
        int sum = cnt_sum(nums, mid);
        if(sum > k){
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid - 1;
        }
      }
      return ans;
    }
};
