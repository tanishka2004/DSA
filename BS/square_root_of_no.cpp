class Solution {
public:
    long long floorSqrt(long long n)  {
        long long low = 1, high = n;
        long long ans = 1;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == n) {
                return mid; // perfect square
            } 
            else if (mid * mid < n) {
                ans = mid;       // possible floor
                low = mid + 1;   // go right to find closer floor
            } 
            else {
                high = mid - 1;  // go left
            }
        }
        return ans;
    }
};
