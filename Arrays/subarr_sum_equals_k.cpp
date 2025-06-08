class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // optimal
        map<int, int>mpp;
        mpp[0] = 1;
        int presum = 0, cnt = 0;
        for(int i=0; i<nums.size(); i++){
            presum += nums[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }
        return cnt;
        // better
        int cnt =0;
        for(int i=0; i<=nums.size(); i++){
            int sum =0;
            for(int j=i; j<=nums.size()-1; j++){
               sum += nums[j];
            if(sum == k){
                cnt++;
            }
            }
        }
        return cnt;
        
        // brute
        int cnt =0;
        for(int i=0; i<=nums.size(); i++){
            for(int j=i; j<=nums.size()-1; j++){
                int sum  = 0;
                for(int k=i; k<=j; k++){
                    sum = sum + nums[k];
                }
            if(sum == k){
                cnt++;
            }
            }
        }
        return cnt;
    }
};
