// optimal solution
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if(n1>n2) return findMedianSortedArrays(nums2, nums1);
        int left = (n1+n2+1)/2;
        int n = n1 + n2;
        int low = 0, high = n1;
        while(low<=high){
            int mid1 = (low+high)/2;
            int mid2 = left - mid1;
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            if(mid1<n1) r1 = nums1[mid1];
            if(mid2<n2) r2 = nums2[mid2];
            if(mid1 - 1 >=0) l1 = nums1[mid1 - 1];
            if(mid2 - 1 >=0) l2 = nums2[mid2 - 1];
            if(l1<=r2 && l2<=r1){
                if(n % 2 == 1) return(max(l1,l2));
                 return double(max(l1,l2) + min(r1,r2))/2;
            }
            else if(l1>r2) {
                high = mid1 - 1;
            }
            else {
                low = mid1 + 1;
            }
        }
        return 0;
    }
};
// better solution
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
