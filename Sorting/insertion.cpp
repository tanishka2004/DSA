class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
         for(int i=0; i<=n-1;  i++){
            j =1;
            int a;
            while(j>0 && a[j-1]>a[j]){
                swap[a[j-1],a[j]];
                j--
            }
         }  
         return a; 
    }
};

// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]
// Explanation: 1 <= 3 <= 4 <= 5 <= 7.
// Thus the array is sorted in non-decreasing order.
