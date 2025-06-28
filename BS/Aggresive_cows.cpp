bool canweplace(vector<int> &nums, int dist, int k){
    int n = nums.size();
    int cnt_cows = 1;
    int last_cow = nums[0];
    for(int i = 0; i<n; i++){
        if(nums[i] - last_cow >= dist){
            cnt_cows++;
            last_cow = nums[i];
        }
        if(cnt_cows >= k) return true;
    }
    return false;
}
class Solution {
public:
    int aggressiveCows(vector<int> &nums, int k) {
     sort(nums.begin(), nums.end());
     int n = nums.size();
     int low = 1, high = nums[n-1] - nums[0];
     int ans = -1;
     while(low<=high){
        int mid = (low + high)/2;
        if(canweplace(nums, mid, k) == true){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
     }
     return ans;   
    }
};
