class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int n = n1 + n2;
        int idx1 = n / 2;          // For even case: second median index
        int idx2 = idx1 - 1;       // For even case: first median index
        int cnt = 0;
        int val1 = -1, val2 = -1;  // Store values at idx1 and idx2

        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            int val;
            if (nums1[i] < nums2[j]) {
                val = nums1[i];
                i++;
            } else {
                val = nums2[j];
                j++;
            }

            if (cnt == idx2) val1 = val;
            if (cnt == idx1) val2 = val;
            cnt++;
        }

        while (i < n1) {
            int val = nums1[i++];
            if (cnt == idx2) val1 = val;
            if (cnt == idx1) val2 = val;
            cnt++;
        }

        while (j < n2) {
            int val = nums2[j++];
            if (cnt == idx2) val1 = val;
            if (cnt == idx1) val2 = val;
            cnt++;
        }

        // If n is odd, median is the middle element
        if (n % 2 == 1) return val2;

        // If n is even, median is the average of the two middle elements
        return (val1 + val2) / 2.0;
    }
};
