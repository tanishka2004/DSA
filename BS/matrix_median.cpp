int upperbound(vector<int> &arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int countSmallEqual(vector<vector<int>> &matrix, int x) {
    int m = matrix.size();
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        cnt += upperbound(matrix[i], x);
    }
    return cnt;
}

class Solution {
public:
    int findMedian(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = INT_MAX, high = INT_MIN;

        // Find min and max element in the matrix
        for (int i = 0; i < m; i++) {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][n - 1]);
        }

        int req = (m * n) / 2;
        while (low <= high) {
            int mid = (low + high) / 2;
            int smallEqual = countSmallEqual(matrix, mid);

            if (smallEqual <= req)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};
