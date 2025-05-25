class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    // brute approch
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> st;
        for(int i =0; i<n1; i++){
            st.insert(nums1[i]);
        }
         for(int i =0; i<n2; i++){
            st.insert(nums2[i]);
        }
        vector<int> temp;
        for(auto it : st){
            temp.push_back(it);
        }
        return temp;
     }
 };
// Examples:
// Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]

// Output: [1, 2, 3, 4, 5, 7]

// Explanation: The elements 1, 2 are common to both, 3, 4, 5
