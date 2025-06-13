class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
              long long n = nums.size();
            //   s - Sn
            // s2 - s2n
            long long sn = (n*(n+1))/2;
            long long s2n = n*(n+1)*(2*n + 1)/6;
            long long s = 0, s2 = 0;
            for(int i =0; i<n; i++){
                s += nums[i];
               s2 += 1LL * nums[i] * nums[i];
            }
            int val1 = s - sn;
            int val2 = s2 - s2n;
            val2 = val2/val1;
            long long x = (val1+val2)/2;
            long long y = x - val1;
            return{(int)x, (int)y};
    }
};
