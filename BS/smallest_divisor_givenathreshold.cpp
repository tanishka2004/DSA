int sumofd(vector<int> &nums, int div){
    int n = nums.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + ceil(double(nums[i])/double(div));
    }
    return sum;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size() > threshold) return -1;
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(sumofd(nums, mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
               low = mid + 1;
            }
        }
        return ans;
    }
};
