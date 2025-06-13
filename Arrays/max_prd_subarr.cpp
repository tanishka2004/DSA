class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1, suffix = 1;
        int maxi = INT_MIN;  

        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n - i - 1];

            maxi = max({maxi, prefix, suffix});  // max of all 3 values
        }

        return maxi;
    }
};

        // int maxi = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     int prd = 1;
        //     for(int j = i; j<nums.size(); j++){
        //          prd = prd*nums[j];
        //          maxi = max(maxi, prd);
        //     }
        // }
        // return maxi;
