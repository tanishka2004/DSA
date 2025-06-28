#include <bits/stdc++.h>
using namespace std;

int cnt_std(vector<int> &nums, int pages) {
    int students = 1;
    long long pagesStudent = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (pagesStudent + nums[i] <= pages) {
            pagesStudent += nums[i];
        } else {
            students++;
            pagesStudent = nums[i];
        }
    }

    return students;
}

class Solution {
public:
    int findPages(vector<int> &nums, int m) {
        if (nums.size() < m) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int students = cnt_std(nums, mid);

            if (students > m) {
                low = mid + 1;
            } else {
                ans = mid;           
                high = mid - 1;    
            }
        }

        return ans;
    }
};
