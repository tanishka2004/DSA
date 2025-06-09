class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // optimal
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        for (int num : nums) {
            if (cnt1 == 0 && num != el2) {
                el1 = num;
                cnt1 = 1;
            } else if (cnt2 == 0 && num != el1) {
                el2 = num;
                cnt2 = 1;
            } else if (num == el1) {
                cnt1++;
            } else if (num == el2) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        // Verify the candidates
        cnt1 = cnt2 = 0;
        for (int num : nums) {
            if (num == el1) cnt1++;
            else if (num == el2) cnt2++;  // Use else-if to avoid double counting if el1 == el2
        }

        int mini = nums.size() / 3;
        vector<int> ls;
        if (cnt1 > mini) ls.push_back(el1);
        if (cnt2 > mini) ls.push_back(el2);

        sort(ls.begin(), ls.end());
        return ls;
    }
};
 
        // better
        // vector<int> ls;
        // map<int,int> mpp;
        // int mini = nums.size()/3 + 1;
        // for(int i = 0; i < nums.size(); i++) {
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]] == mini){
        //         ls.push_back(nums[i]);
        //     }
        //     if(ls.size() == 2)
        //     break;
        
        // }
        
        // sort(ls.begin(), ls.end());
        // return ls;    
//     }
// };
