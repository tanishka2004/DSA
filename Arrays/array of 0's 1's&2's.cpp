class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
    //    optimal approach
        int low = 0, mid = 0, high = nums.size() -1;
        while(mid<=high){
            if(nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid++, low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            }

        // brute approach
        int cnt = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cnt++;
            else if (nums[i] == 1) cnt1++;
            else cnt2++;
        }
        for(int i =0; i<cnt; i++){
            nums[i] = 0;
            }
         for(int i =cnt; i<cnt + cnt1; i++){
            nums[i] = 1;
            }
         for(int i =cnt + cnt1; i<nums.size(); i++){
            nums[i] = 2;
            }
        }
    };
